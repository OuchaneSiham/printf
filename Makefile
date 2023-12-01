# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souchane <souchane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:55:19 by souchane          #+#    #+#              #
#    Updated: 2023/11/29 21:00:32 by souchane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
F           = -Wall -Wextra -Werror
CC          = cc 
RM			= rm -f
HEADER		= ft_printf.h
AR			= ar rc
FILES       = ft_unsigned_d.c ft_putstr.c ft_putnbr.c ft_puthexax.c ft_putchar.c  \
			ft_printf.c ft_putaddress.c 

OFILES		= $(FILES:.c=.o)

%.o: %.c  $(HEADER)
	$(CC) $(F) -c $<

all : $(NAME)

$(NAME): $(OFILES)
	@ $(AR) $(NAME) $(OFILES)
	@ echo "Creation of libftprintf.a"

clean :
	@ $(RM) $(OFILES)
	@ echo "remove objs files"

fclean : clean
	@$(RM) $(NAME)
	@ echo "remove libftprintf.a"

re : fclean all

.PHONY : clean fclean re
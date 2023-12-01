/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:25:17 by souchane          #+#    #+#             */
/*   Updated: 2023/12/01 16:50:09 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_unsigned_d(unsigned int nb);
int		ft_puthexax(unsigned int nb, int c);
int		ft_putnbr(int nb);
int		ft_putadress(void *ads);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

#endif

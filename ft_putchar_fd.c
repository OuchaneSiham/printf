/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:29 by souchane          #+#    #+#             */
/*   Updated: 2023/12/01 16:50:21 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)

{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
// int main()
// {
// 	int fd = open ("sih6", O_TRUNC | O_RDWR, 0777);
// 	printf("%d\n", fd);
// 	ft_putchar_fd('5', fd);ls
// }
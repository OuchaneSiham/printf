/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:55:06 by souchane          #+#    #+#             */
/*   Updated: 2023/11/29 20:02:54 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long		n;
	int			len;

	len = 0;
	n = nb;
	if (n < 0)
	{
		len = len + ft_putchar('-');
		n = -n;
	}
	if (n <= 9)
		len = len + ft_putchar(n + '0');
	else
	{
		len = len + ft_putnbr(n / 10);
		len = len + ft_putnbr(n % 10);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:25:34 by souchane          #+#    #+#             */
/*   Updated: 2023/11/29 17:50:28 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_d(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb <= 9)
		len = len + ft_putchar(nb + '0');
	else
	{
		len = len + ft_putnbr(nb / 10);
		len = len + ft_putnbr(nb % 10);
	}
	return (len);
}

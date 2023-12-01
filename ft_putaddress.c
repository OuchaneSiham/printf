/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:12:48 by souchane          #+#    #+#             */
/*   Updated: 2023/11/29 04:12:50 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa(unsigned long nb)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (nb <= 15)
		len = len + ft_putchar(hexa[nb]);
	else
	{
		len = len + ft_puthexa(nb / 16);
		len = len + ft_puthexa(nb % 16);
	}
	return (len);
}

int	ft_putadress(void *ads)
{
	unsigned long	add;
	int				len;

	len = 0;
	add = (unsigned long)ads;
	len = len + ft_putstr("0x");
	len = len + ft_puthexa(add);
	return (len);
}

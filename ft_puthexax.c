/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:43:04 by souchane          #+#    #+#             */
/*   Updated: 2023/11/29 04:08:34 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexax(unsigned int nb, int c)
{
	char	*hexa;
	int		len;

	len = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	else if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (nb <= 15)
		len = len + ft_putchar(hexa[nb]);
	else
	{
		len = len + ft_puthexax(nb / 16, c);
		len = len + ft_puthexax(nb % 16, c);
	}
	return (len);
}

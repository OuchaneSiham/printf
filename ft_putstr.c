/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:31:16 by souchane          #+#    #+#             */
/*   Updated: 2023/11/29 21:01:20 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		len = len + ft_putchar(str[i]);
		i++;
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:34:12 by souchane          #+#    #+#             */
/*   Updated: 2023/12/01 17:54:41 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char c, va_list ar)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ar, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ar, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ar, int));
	else if (c == 'x' || c == 'X')
		len += ft_puthexax(va_arg(ar, unsigned int), c);
	else if (c == 'p')
		len += ft_putadress(va_arg(ar, void *));
	else if (c == 'u')
		len += ft_unsigned_d(va_arg(ar, unsigned int));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const	char *str, ...)
{
	va_list	ar;
	int		i;
	int		len;

	va_start(ar, str);
	i = 0;
	len = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			len = len + ft_check(str[i], ar);
		}
		else if (str[i] != '%')
			len = len + ft_putchar(str[i]);
		i++;
	}
	va_end(ar);
	return (len);
}
// int main()
//  {
// 	// int a;
// 	// a = 50;
// 	// ft_printf("%p\n", &a);
// 	// printf("%p\n", &a);
// 	// int a = ft_printf("%d %s %u %c 111111%%", 50, "sihamm", 55, 'a');
// 	// printf("\n");
// 	// int b = printf("hshbhsb%d %s %u %c 111111%", 50, "sihamm", 55, 'a');
// 	// ft_printf("%d", b);
	// printf("-%d-\n", 0);
// 	// printf("%s\n", NULL);
//  }
// int main()
// {
// 	int a = ft_printf("%d %% % %s %u %c 111111", 50, "sihamm", 55, 'a');
// 	printf("\n");
// 	int b = printf("%d %% % %s %u %c 111111", 50, "sihamm", 55, 'a');
// }
// int main()
// {
// 	fclose(stdout);
// 	int a = printf("%d", 131);
// 	ft_putnbr_fd(a, 2);
// }
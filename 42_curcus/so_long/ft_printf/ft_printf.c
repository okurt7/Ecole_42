/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:00:58 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 20:01:11 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list arg)
{
	int			i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		i += ft_putbase(va_arg(arg, int), c, 10);
	else if (c == 'u')
		i += ft_putbase(va_arg(arg, unsigned int), c, 10);
	else if (c == 'x' || c == 'X')
		i += ft_putbase(va_arg(arg, unsigned int), c, 16);
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_putbase(va_arg(arg, unsigned long int), c, 16);
	}
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			i += ft_format(str[++count], arg);
			count++;
		}
		else
			i += ft_putchar(str[count++]);
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:11:42 by okurt             #+#    #+#             */
/*   Updated: 2022/08/16 19:12:37 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *ptr, ...);
int	to_what(char c, va_list list);
int	ft_hexadecimal(long double hex_number, int is_upper);
int	ft_putchar(char c);
int	ft_putnbr(long double n);
int	ft_putstr(char *s);

#endif

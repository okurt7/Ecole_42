/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:01:25 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 20:01:28 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putbase(long double n, char c, int b);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_format(char c, va_list arg);

#endif

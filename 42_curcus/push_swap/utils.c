/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:18:42 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:18:44 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_message(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

int	ft_is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_contains(char *source, char c)
{
	while (*source)
	{
		if (*source == c)
			return (1);
		source++;
	}
	return (0);
}

long	ft_atoi(char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	if (*str == '+' || *str == '-')
	{	
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str != ' ')
		result = (10 * result) + *str++ - '0';
	return (result * sign);
}

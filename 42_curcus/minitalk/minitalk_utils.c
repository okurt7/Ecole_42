/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:28:29 by okurt             #+#    #+#             */
/*   Updated: 2022/11/10 18:28:32 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	int		i;
	char	arr[10];

	i = 0;
	number = n;
	if (number == 0)
		write(fd, "0", 1);
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	while (number)
	{
		arr[i++] = number % 10 + 48;
		number = number / 10;
	}
	while (i--)
	{
		write(fd, arr + i, 1);
	}
}

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

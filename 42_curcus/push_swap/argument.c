/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:12:27 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:12:38 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_null(char *arg)
{
	if (*arg == '\0')
	{
		ft_message("Error\n", 2);
		exit(1);
	}
}

void	ft_empty(char *arg)
{
	int	is_empty;

	is_empty = 1;
	while (*arg && is_empty == 1)
		if (*arg++ != ' ')
			is_empty = 0;
	if (is_empty)
	{
		ft_message("Error\n", 2);
		exit(1);
	}
}

void	ft_charset(char *arg)
{
	int	i;
	int	digit;

	i = 0;
	digit = 0;
	while (arg[i] && digit == 0)
		digit = ft_contains("0123456789", arg[i++]);
	while (*arg)
	{
		if (digit == 0 || !ft_contains("0123456789-+ ", *arg))
		{
			ft_message("Error\n", 2);
			exit(1);
		}
		arg++;
	}
}

void	ft_number(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '+' || arg[i] == '-')
		{
			if (!ft_is_digit(arg[i + 1]))
			{
				ft_message("Error\n", 2);
				exit(1);
			}
			if (i > 0 && arg[i - 1] != ' ')
			{
				ft_message("Error\n", 2);
				exit(1);
			}
		}
		i++;
	}
}

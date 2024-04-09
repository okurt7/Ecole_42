/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:16:57 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:17:00 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count(char *arg)
{
	int	count;

	count = 0;
	while (*arg)
	{
		if (*arg != ' ')
		{
			count++;
			while (*arg && *arg != ' ')
				arg++;
		}
		else
			arg++;
	}
	return (count);
}

void	ft_arr_size(t_base_var *base)
{
	int	i;

	i = 1;
	while (base->argv[i])
	{
		base->size += ft_count(base->argv[i]) * sizeof(int);
		i++;
	}
	base->a_len = base->size / sizeof(int);
}

void	ft_arr_allocate(t_base_var *base)
{
	base->arr_a = malloc(base->size);
	if (!base->arr_a)
	{
		ft_message("Error\n", 2);
		exit(1);
	}
	base->arr_b = malloc(base->size);
	if (!base->arr_b)
	{
		free(base->arr_a);
		ft_message("Error\n", 2);
		exit(1);
	}
}

void	ft_insert_number(t_base_var *base, char *arg, int *arr_idx)
{
	long	number;

	while (*arg)
	{
		if (*arg != ' ')
		{
			number = ft_atoi(arg);
			ft_range(base, number);
			base->arr_a[*arr_idx] = (int)number;
			while (*arg && *arg != ' ')
				arg++;
			(*arr_idx)++;
		}
		else
			arg++;
	}
}

void	ft_split(t_base_var *base)
{
	int	i;
	int	arr_idx;

	arr_idx = 0;
	i = 1;
	while (base->argv[i])
	{
		ft_insert_number(base, base->argv[i], &arr_idx);
		i++;
	}
}

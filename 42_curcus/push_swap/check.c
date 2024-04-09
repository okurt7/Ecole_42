/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:13:19 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:13:21 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dublicate(t_base_var *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < base->a_len - 1)
	{
		j = i + 1;
		while (j < base->a_len)
		{
			if (base->arr_a[i] == base->arr_a[j])
			{
				free(base->arr_a);
				free(base->arr_b);
				ft_message("Error\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	ft_range(t_base_var *base, long number)
{
	if (number > INT_MAX || number < INT_MIN)
	{
		free(base->arr_a);
		free(base->arr_b);
		ft_message("Error\n", 2);
		exit(1);
	}
}

void	ft_sorted_or_not(t_base_var *base)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < base->a_len - 1 && result)
	{
		if (base->arr_a[i] > base->arr_a[i + 1])
			result = 0;
		i++;
	}
	if (result)
	{
		free(base->arr_a);
		free(base->arr_b);
		exit(0);
	}
}

int	ft_sorted_or_not_bool(t_base_var *base)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < base->a_len - 1 && result)
	{
		if (base->arr_a[i] > base->arr_a[i + 1])
			result = 0;
		i++;
	}
	return (result);
}

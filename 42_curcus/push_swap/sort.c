/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:18:16 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:18:28 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bit_count(t_base_var *base)
{
	int	max_number;

	max_number = base->a_len;
	while (max_number)
	{
		max_number = max_number >> 1;
		base->bit_count++;
	}
}

void	ft_indexing(t_base_var *base, int *sorted_arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < base->a_len)
	{
		j = 0;
		while (j < base->a_len)
		{
			if (base->arr_a[i] == sorted_arr[j])
			{
				base->arr_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sorted_arr);
}

void	ft_radix(t_base_var *base)
{
	int	i;
	int	j;
	int	a_len;

	a_len = base->a_len;
	i = 0;
	while (i < base->bit_count)
	{
		j = 0;
		while (j < a_len)
		{
			if ((base->arr_a[0] >> i) & 1)
				ra(base);
			else
				pb(base);
			j++;
		}
		while (base->b_len)
			pa(base);
		i++;
	}
}

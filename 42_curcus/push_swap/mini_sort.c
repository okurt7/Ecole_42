/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:14:37 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:14:41 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mini_two(t_base_var *base)
{
	if (base->arr_a[0] > base->arr_a[1])
		sa(base);
}

void	ft_mini_sort(t_base_var *base)
{
	int	push_value;

	push_value = 0;
	while (push_value < 3)
	{
		while (base->arr_a[0] != push_value)
		{
			if (ft_sorted_or_not_bool(base))
				break ;
			if (base->arr_a[0] == 2 && base->arr_a[1] == 0)
				ra(base);
			ft_mini_two(base);
			if (base->arr_a[0] != push_value)
				rra(base);
		}
		if (ft_sorted_or_not_bool(base))
			break ;
		pb(base);
		push_value++;
	}
	ft_mini_two(base);
	while (base->b_len)
		pa(base);
}

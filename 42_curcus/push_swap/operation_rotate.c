/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:16:16 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:16:19 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_base_var *base)
{
	int	i;
	int	temp;

	if (base->a_len > 1)
	{
		temp = base->arr_a[0];
		i = 0;
		while (i < base->a_len - 1)
		{
			base->arr_a[i] = base->arr_a[i + 1];
			i++;
		}
		base->arr_a[i] = temp;
		ft_message("ra\n", 1);
	}
}

void	rra(t_base_var *base)
{
	int	i;
	int	temp;

	if (base->a_len > 1)
	{
		temp = base->arr_a[base->a_len - 1];
		i = base->a_len - 1;
		while (i > 0)
		{
			base->arr_a[i] = base->arr_a[i - 1];
			i--;
		}
		base->arr_a[i] = temp;
		ft_message("rra\n", 1);
	}
}

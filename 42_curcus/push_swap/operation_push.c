/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:15:01 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:15:03 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_base_var *base)
{
	int	i;

	if (base->b_len > 0)
	{
		i = base->a_len;
		while (i > 0)
		{
			base->arr_a[i] = base->arr_a[i - 1];
			i--;
		}
		base->arr_a[0] = base->arr_b[0];
		base->a_len += 1;
		base->b_len -= 1;
		i = 0;
		while (i < base->b_len)
		{
			base->arr_b[i] = base->arr_b[i + 1];
			i++;
		}
	}
	ft_message("pa\n", 1);
}

void	pb(t_base_var *base)
{
	int	i;

	if (base->a_len > 0)
	{
		i = base->b_len;
		while (i > 0)
		{
			base->arr_b[i] = base->arr_b[i - 1];
			i--;
		}
		base->arr_b[0] = base->arr_a[0];
		base->b_len += 1;
		base->a_len -= 1;
		i = 0;
		while (i < base->a_len)
		{
			base->arr_a[i] = base->arr_a[i + 1];
			i++;
		}
	}
	ft_message("pb\n", 1);
}

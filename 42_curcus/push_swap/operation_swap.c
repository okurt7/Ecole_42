/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:16:38 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:16:41 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_base_var *base)
{
	int	swap;

	if (base->a_len > 1)
	{
		swap = base->arr_a[0];
		base->arr_a[0] = base->arr_a[1];
		base->arr_a[1] = swap;
		ft_message("sa\n", 1);
	}
}

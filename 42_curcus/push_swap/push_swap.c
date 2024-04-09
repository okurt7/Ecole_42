/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:17:37 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:43:03 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_base_var *base)
{	
	ft_argument(base);
	ft_parse(base);
	ft_sort(base);
}

void	ft_argument(t_base_var *base)
{
	int	i;

	i = 1;
	while (i < base->argc)
	{
		ft_null(base->argv[i]);
		ft_empty(base->argv[i]);
		ft_charset(base->argv[i]);
		ft_number(base->argv[i]);
		i++;
	}
}

void	ft_parse(t_base_var *base)
{
	ft_arr_size(base);
	ft_arr_allocate(base);
	ft_split(base);
	ft_dublicate(base);
}

void	ft_sort(t_base_var *base)
{
	ft_sorted_or_not(base);
	ft_indexing(base, ft_bubble_sort(base));
	if (base->a_len <= 5)
		ft_mini_sort(base);
	else
	{
		ft_bit_count(base);
		ft_radix(base);
	}
}

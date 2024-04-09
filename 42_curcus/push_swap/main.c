/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:13:31 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:13:39 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_base_be_zero(t_base_var *base)
{
	base->a_len = 0;
	base->b_len = 0;
	base->arr_a = 0;
	base->arr_b = 0;
	base->size = 0;
	base->bit_count = 0;
}

int	main(int argc, char **argv)
{
	t_base_var	base;

	if (argc == 1)
		exit(0);
	else
	{
		ft_base_be_zero(&base);
		base.argc = argc;
		base.argv = argv;
		push_swap(&base);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:44:21 by okurt             #+#    #+#             */
/*   Updated: 2021/12/05 16:41:15 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		read_index;
	int		index;
	bool	swapped;

	read_index = 0;
	while (true)
	{
		swapped = false;
		index = 0;
		while (index < size)
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swapped = true;
			}
			index++;
		}
		if (!swapped)
		{
			break ;
		}
		read_index++;
	}
}

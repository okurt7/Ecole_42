/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:12:47 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:13:01 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_arr(int *arr, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_copy_arr(int *dest_arr, t_base_var *base)
{
	int	i;

	i = 0;
	while (i < base->a_len)
	{
		dest_arr[i] = base->arr_a[i];
		i++;
	}
}

int	*ft_bubble_sort(t_base_var *base)
{
	int	*arr;

	arr = malloc(base->size);
	if (!arr)
	{
		free(base->arr_a);
		free(base->arr_b);
		exit(1);
	}
	ft_copy_arr(arr, base);
	ft_sort_arr(arr, base->a_len);
	return (arr);
}

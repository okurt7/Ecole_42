/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:49:33 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:49:36 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_collect_total(t_data *data, t_collect *collect)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_heigth)
	{
		j = 0;
		while (j < data->map_width)
		{
			if (data->map[i][j] == 'C')
				collect->total++;
			j++;
		}
		i++;
	}
}

static void	ft_collects(t_data *data, t_collect *collect)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < data->map_heigth)
	{
		j = 0;
		while (j < data->map_width)
		{
			if (data->map[i][j] == 'C')
			{
				collect->collects[k][0] = i;
				collect->collects[k][1] = j;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_put_collect(t_data *data, t_collect *collect)
{
	int	i;

	i = 0;
	while (i < collect->total)
	{
		if (collect->collects[i][2] != 0)
		{
			mlx_put_image_to_window(data->mlx, data->win, collect->img,
				collect->collects[i][1] * 64, collect->collects[i][0] * 64);
		}
		i++;
	}
}

void	ft_init_collect(t_data *data, t_collect *collect)
{
	int	i;
	int	a;

	a = 64;
	collect->total = 0;
	collect->collected = 0;
	i = 0;
	ft_collect_total(data, collect);
	collect->collects = malloc(sizeof(int *) * collect->total);
	while (i < collect->total)
	{
		collect->collects[i] = malloc(sizeof(int) * 3);
		collect->collects[i][2] = 1;
		i++;
	}
	ft_collects(data, collect);
	collect->img = mlx_xpm_file_to_image(data->mlx,
			"./srcs/collect.xpm", &a, &a);
	if ((int)(collect->img) == 0)
		ft_error();
	ft_put_collect(data, collect);
}

void	ft_check_collects(t_data *data, int x, int y)
{
	int	i;

	i = 0;
	while (i < data->collect.total)
	{
		if (data->collect.collects[i][0] == x
			&& data->collect.collects[i][1] == y
			&& data->collect.collects[i][2] != 0)
		{
			data->collect.collected++;
			data->collect.collects[i][2] = 0;
		}
		i++;
	}
}

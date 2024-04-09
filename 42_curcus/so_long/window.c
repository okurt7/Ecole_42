/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:54:48 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:54:51 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_window(t_data *data)
{
	data->win = mlx_new_window(data->mlx,
			data->map_width * 64, data->map_heigth * 64, "so_long");
	data->x = 0;
	data->y = 0;
}

void	ft_clear_window(t_data *data)
{
	mlx_clear_window(data->mlx, data->win);
	data->x = 0;
	data->y = 0;
	ft_put_map(data);
	ft_put_collect(data, &(data->collect));
}

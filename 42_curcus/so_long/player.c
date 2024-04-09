/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:52:54 by okurt             #+#    #+#             */
/*   Updated: 2023/01/20 15:45:11 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_player(t_data *data, t_player *player)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_heigth)
	{
		j = 0;
		while (j < data->map_width)
		{
			if (data->map[i][j] == 'P')
			{
				player->y = i;
				player->x = j;
				mlx_put_image_to_window(data->mlx,
					data->win, player->stand, player->x * 64, player->y * 64);
			}
			j++;
		}
		i++;
	}
}

void	ft_init_player(t_data *data, t_player *player)
{
	int	a;

	a = 64;
	player->count = 0;
	player->front = mlx_xpm_file_to_image(data->mlx,
			"./srcs/front.xpm", &a, &a);
	player->back = mlx_xpm_file_to_image(data->mlx,
			"./srcs/back.xpm", &a, &a);
	player->left = mlx_xpm_file_to_image(data->mlx,
			"./srcs/left.xpm", &a, &a);
	player->right = mlx_xpm_file_to_image(data->mlx,
			"./srcs/right.xpm", &a, &a);
	player->stand = mlx_xpm_file_to_image(data->mlx,
			"./srcs/stand.xpm", &a, &a);
	if ((int)(player->front) == 0 || (int)(player->back) == 0 \
	|| (int)(player->left) == 0 \
	|| (int)(player->right) == 0 || (int)(player->stand) == 0)
		ft_error();
	ft_put_player(data, player);
}

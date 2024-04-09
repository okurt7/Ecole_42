/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:50:35 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:50:40 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_xbutton(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
}

static void	ft_check_ber(char *path)
{
	int	i;

	i = ft_strlen(path) - 1;
	if (path[i] != 'r' || path[i - 1] != 'e'
		|| path[i - 2] != 'b' || path[i - 3] != '.')
		ft_error();
}

void	ft_init_data(t_data *data, char *path)
{
	t_player	player;
	t_collect	collect;

	ft_check_ber(path);
	ft_calculate_map_size(data, path);
	ft_get_map(data, path);
	check_letter(data);
	ft_check_map(data);
	ft_valid_path(data, &player);
	ft_get_window(data);
	ft_put_map(data);
	ft_init_collect(data, &collect);
	ft_init_player(data, &player);
	data->player = player;
	data->collect = collect;
	mlx_string_put(data->mlx, data->win, 32, 32, 0, "0");
	mlx_hook(data->win, 17, 0, &ft_xbutton, data);
	mlx_hook(data->win, 2, 0, &ft_move, data);
}

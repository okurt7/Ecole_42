/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:52:13 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:52:16 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_walls(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->map_heigth)
	{
		if (data->map[i][0] != '1' || data->map[i][data->map_width - 1] != '1')
			ft_error();
		i++;
	}
	i = 0;
	while (i < data->map_width)
	{
		if (data->map[0][i] != '1')
			ft_error();
		if (data->map[data->map_heigth -1][i] != '1')
			ft_error();
		i++;
	}
}

void	ft_calculate_map_size(t_data *data, char *path)
{
	char	*read_map;
	int		fd;

	data->map_heigth = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1 || read(fd, NULL, 0) == -1)
		ft_error();
	close(fd);
	fd = open(path, O_RDONLY);
	read_map = get_next_line(fd);
	if (!read_map)
		ft_error();
	data->map_width = ft_strlen(read_map) - 1;
	while (read_map)
	{
		data->map_heigth++;
		free(read_map);
		read_map = get_next_line(fd);
	}
	free(read_map);
}

void	ft_get_map(t_data *data, char *path)
{
	int		fd;
	int		i;

	data->path = path;
	data->map = malloc(sizeof(char *) * data->map_heigth);
	fd = open(path, O_RDONLY);
	i = 0;
	while (i < data->map_heigth)
	{
		data->map[i] = get_next_line(fd);
		i++;
	}
	ft_check_walls(data);
}

static void	ft_init_map(t_data *data, t_map *map)
{
	int	a;

	a = 64;
	map->floor = mlx_xpm_file_to_image(data->mlx, "./srcs/floor.xpm", &a, &a);
	map->wall = mlx_xpm_file_to_image(data->mlx, "./srcs/wall.xpm", &a, &a);
	map->exit = mlx_xpm_file_to_image(data->mlx, "./srcs/exit.xpm", &a, &a);
	if ((int)(map->floor) == 0 || (int)(map->wall) == 0 \
	|| (int)(map->exit) == 0)
		ft_error();
}

void	ft_put_map(t_data *data)
{
	t_map	map;

	ft_init_map(data, &map);
	while (data->y < data->map_heigth)
	{
		data->x = 0;
		while (data->x < data->map_width)
		{
			if (data->map[data->y][data->x] == '1')
				mlx_put_image_to_window(data->mlx,
					data->win, map.wall, data->x * 64, data->y * 64);
			else
			{
				ft_check_walls(data);
				mlx_put_image_to_window(data->mlx, data->win,
					map.floor, data->x * 64, data->y * 64);
			}
			if (data->map[data->y][data->x] == 'E')
				mlx_put_image_to_window(data->mlx,
					data->win, map.exit, data->x * 64, data->y * 64);
			data->x++;
		}
		data->y++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:52:34 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:52:38 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "key.h"

static void	ft_moveup(t_data *data)
{
	if (data->map[data->player.y - 1][data->player.x] == 'C')
	{
		ft_check_collects(data, data->player.y - 1, data->player.x);
		ft_clear_window(data);
	}
	if (data->map[data->player.y - 1][data->player.x] != '1')
	{
		if (data->map[data->player.y - 1][data->player.x] == 'E')
		{
			if (data->collect.collected == data->collect.total)
			{
				ft_move_count(data);
				data->player.y--;
				mlx_destroy_window(data->mlx, data->win);
				exit(0);
			}
		}
		else
		{
			ft_move_count(data);
			data->player.y--;
		}
	}
	ft_display_and_put(data, data->player.back);
}

static void	ft_movedown(t_data *data)
{
	if (data->map[data->player.y + 1][data->player.x] == 'C')
	{
		ft_check_collects(data, data->player.y + 1, data->player.x);
		ft_clear_window(data);
	}
	if (data->map[data->player.y + 1][data->player.x] != '1')
	{
		if (data->map[data->player.y + 1][data->player.x] == 'E')
		{
			if (data->collect.collected == data->collect.total)
			{
				ft_move_count(data);
				data->player.y++;
				mlx_destroy_window(data->mlx, data->win);
				exit(0);
			}
		}
		else
		{
			ft_move_count(data);
			data->player.y++;
		}
	}
	ft_display_and_put(data, data->player.front);
}

static void	ft_moveleft(t_data *data)
{
	if (data->map[data->player.y][data->player.x - 1] == 'C')
	{
		ft_check_collects(data, data->player.y, data->player.x - 1);
		ft_clear_window(data);
	}
	if (data->map[data->player.y][data->player.x - 1] != '1')
	{
		if (data->map[data->player.y][data->player.x - 1] == 'E')
		{
			if (data->collect.collected == data->collect.total)
			{
				ft_move_count(data);
				data->player.x--;
				mlx_destroy_window(data->mlx, data->win);
				system("leaks so_long");
				exit(0);
			}
		}
		else
		{
			ft_move_count(data);
			data->player.x--;
		}
	}
	ft_display_and_put(data, data->player.left);
}

static void	ft_moveright(t_data *data)
{
	if (data->map[data->player.y][data->player.x + 1] == 'C')
	{
		ft_check_collects(data, data->player.y, data->player.x + 1);
		ft_clear_window(data);
	}
	if (data->map[data->player.y][data->player.x + 1] != '1')
	{
		if (data->map[data->player.y][data->player.x + 1] == 'E')
		{
			if (data->collect.collected == data->collect.total)
			{
				ft_move_count(data);
				data->player.x++;
				mlx_destroy_window(data->mlx, data->win);
				exit(0);
			}
		}
		else
		{
			ft_move_count(data);
			data->player.x++;
		}
	}
	ft_display_and_put(data, data->player.right);
}

int	ft_move(int keycode, t_data *data)
{
	if (keycode == KEY_W || keycode == KEY_A || keycode == KEY_S
		|| keycode == KEY_D)
		ft_clear_window(data);
	if (keycode == KEY_W)
		ft_moveup(data);
	if (keycode == KEY_A)
		ft_moveleft(data);
	if (keycode == KEY_S)
		ft_movedown(data);
	if (keycode == KEY_D)
		ft_moveright(data);
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	return (0);
}

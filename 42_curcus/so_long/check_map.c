/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:49:05 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:49:17 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static t_check	*ft_init_check(void)
{
	t_check	*check;

	check = malloc(sizeof(t_check));
	check->c_len = 0;
	check->p_len = 0;
	check->e_len = 0;
	check->i = 0;
	check->temp = 1;
	return (check);
}

static void	ft_check_epc(t_check *check)
{
	if (check->c_len < 1
		|| check->p_len != 1
		|| check->e_len != 1)
		ft_error();
}

void	ft_check_map(t_data *data)
{
	t_check	*check;

	check = ft_init_check();
	while (check->i < data->map_heigth)
	{
		check->j = 0;
		while (check->j < data->map_width)
		{
			if (data->map[check->i][check->j] == 'C')
				check->c_len++;
			if (data->map[check->i][check->j] == 'P')
				check->p_len++;
			if (data->map[check->i][check->j] == 'E')
				check->e_len++;
			check->j++;
		}
		if (check->i == data->map_heigth - 1)
			check->temp = 0;
		if (ft_strlen(data->map[check->i]) - check->temp
			!= data->map_width)
			ft_error();
		check->i++;
	}
	ft_check_epc(check);
	free(check);
}

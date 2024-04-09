/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:51:30 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:51:35 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	data.mlx = mlx_init();
	if (argc != 2)
		return (1);
	ft_init_data(&data, argv[1]);
	mlx_loop(data.mlx);
	return (0);
}

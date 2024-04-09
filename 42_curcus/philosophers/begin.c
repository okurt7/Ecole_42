/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:07:49 by okurt             #+#    #+#             */
/*   Updated: 2023/03/15 17:36:03 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_begin(char **argv)
{
	int			result;
	t_shared	shared;
	t_object	obj;

	if (ft_init_shared(&shared, argv))
		return (1);
	if (ft_check_arguments(shared))
		return (1);
	if (ft_init_object(&obj, shared.number_of_philo))
		return (1);
	if (ft_init_mutex(obj.fork_mutexs, shared.number_of_philo))
		return (1);
	ft_init_philosophers(&obj, &shared, shared.number_of_philo);
	result = ft_init_threads(&obj, shared.number_of_philo);
	ft_cleaner(&obj, &shared);
	return (result);
}

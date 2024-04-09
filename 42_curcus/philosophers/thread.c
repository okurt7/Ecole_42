/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:10:45 by okurt             #+#    #+#             */
/*   Updated: 2023/03/17 17:36:41 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_kill_the_philosopher(t_philosopher *philo, int i)
{
	t_time	time;

	pthread_mutex_lock(&philo[i].shared->die_mtx);
	philo[i].shared->die = 1;
	pthread_mutex_unlock(&philo[i].shared->die_mtx);
	pthread_mutex_lock(&philo[i].eat_mutex);
	if (philo[i].eat_count != philo[i].shared->number_of_must_eat)
	{
		time = ft_gettime_ms() - philo[i].start_time;
		printf("%lu %d %s\n", time, philo[i].id, DIE);
	}
	pthread_mutex_unlock(&philo[i].eat_mutex);
}

void	ft_watch(t_philosopher *philo)
{
	int				i;
	unsigned long	time_to_die;

	i = 0;
	while (1)
	{
		time_to_die = (unsigned long)philo[i].shared->time_to_die;
		pthread_mutex_lock(&philo[i].time_mutex);
		if (ft_gettime_ms() - philo[i].last_eat_time >= time_to_die)
		{
			pthread_mutex_unlock(&philo[i].time_mutex);
			ft_kill_the_philosopher(philo, i);
			break ;
		}
		else
			pthread_mutex_unlock(&philo[i].time_mutex);
		if (i == philo[i].shared->number_of_philo - 1)
			i = 0;
		else
			i++;
		usleep(50);
	}
}

int	ft_init_threads(t_object *obj, int nop)
{
	int	i;

	i = 0;
	while (i < nop)
	{
		if (pthread_create(&obj->threads[i], NULL, \
										ft_life_cycle, &obj->philosophers[i]))
			return (1);
		i += 2;
		usleep(50);
	}
	i = 1;
	while (i < nop)
	{
		if (pthread_create(&obj->threads[i], NULL, \
										ft_life_cycle, &obj->philosophers[i]))
			return (1);
		i += 2;
		usleep(50);
	}
	ft_watch(obj->philosophers);
	while (nop--)
		if (pthread_join(obj->threads[nop], NULL))
			return (1);
	return (0);
}

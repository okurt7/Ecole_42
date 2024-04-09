/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:11:03 by okurt             #+#    #+#             */
/*   Updated: 2023/03/15 17:36:38 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	ft_atoi(char *arg)
{
	long	number;

	number = 0;
	while (*arg)
	{
		if (*arg == '+' || *arg == ' ')
			arg++;
		else
		{
			number = (number * 10) + (*arg - '0');
			arg++;
		}
	}
	return (number);
}

void	ft_message(t_time time, t_philosopher *philo, char *msg)
{
	pthread_mutex_lock(&philo->shared->message_mtx);
	pthread_mutex_lock(&philo->shared->die_mtx);
	if (!philo->shared->die)
		printf("%lu %d %s\n", time, philo->id, msg);
	pthread_mutex_unlock(&philo->shared->die_mtx);
	pthread_mutex_unlock(&philo->shared->message_mtx);
}

t_time	ft_gettime_ms(void)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec * 1000) + (current_time.tv_usec / 1000));
}

void	ft_cleaner(t_object *obj, t_shared *shared)
{
	int	i;

	pthread_mutex_destroy(&shared->message_mtx);
	pthread_mutex_destroy(&shared->die_mtx);
	i = 0;
	while (i < shared->number_of_philo)
		pthread_mutex_destroy(&(obj->fork_mutexs[i++]));
	i = 0;
	while (i < shared->number_of_philo)
	{
		pthread_mutex_destroy(&(obj->philosophers[i].time_mutex));
		pthread_mutex_destroy(&(obj->philosophers[i].eat_mutex));
		i++;
	}
	free(obj->fork_mutexs);
	free(obj->philosophers);
	free(obj->threads);
}

void	ft_smart_sleep(t_time time_to_sleep)
{
	t_time	start;

	start = ft_gettime_ms();
	while (1)
	{
		if (ft_gettime_ms() - start >= time_to_sleep)
			break ;
		usleep(50);
	}
}

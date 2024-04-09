/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:11 by okurt             #+#    #+#             */
/*   Updated: 2022/11/10 18:27:24 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "minitalk.h"

void	to_kill(int pid, char	*argv)
{
	int		i;
	int		x;
	char	c;
	char	*str;

	x = 0;
	str = argv;
	while (str[x])
	{
		c = str[x];
		x++;
		i = 7;
		while (i >= 0)
		{
			if (c >> i & 1)
			{
				kill(pid, SIGUSR1);
			}
			else
				kill(pid, SIGUSR2);
			usleep(60);
			i--;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		to_kill(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}

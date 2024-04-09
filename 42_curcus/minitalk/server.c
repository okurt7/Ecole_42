/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:28:52 by okurt             #+#    #+#             */
/*   Updated: 2022/12/23 14:41:45 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>

void	send_signal(int sig)
{
	static int	i = 7;
	static char	c = 0;

	c += sig << i;
	if (i == 0)
	{
		i = 7;
		ft_putchar(c);
		c = 0;
	}
	else
		i--;
}

void	which_signal(int signal)
{
	if (signal == SIGUSR1)
		send_signal(1);
	if (signal == SIGUSR2)
		send_signal(0);
}

int	main(void)
{
	ft_putstr("Process id : \n");
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	signal(SIGUSR1, which_signal);
	signal(SIGUSR2, which_signal);
	while (1)
		pause();
	return (0);
}

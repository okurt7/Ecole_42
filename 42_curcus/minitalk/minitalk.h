/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:50 by okurt             #+#    #+#             */
/*   Updated: 2022/11/10 18:27:53 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *argv);
void	ft_putnbr_fd(int n, int fd);
void	send_signal(int sig);
void	to_kill(int pid, char *str);
void	which_signal(int signal);

#endif

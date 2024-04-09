/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:55:24 by okurt             #+#    #+#             */
/*   Updated: 2023/05/02 18:55:25 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	close_all_fd(void)
{
	t_process	*process;

	process = g_ms.process;
	while (process)
	{
		close(process->fd[0]);
		close(process->fd[1]);
		process = process->next;
	}
}

void	close_heredoc_fd(void)
{
	if (g_ms.heredoc_fd[0] > 2)
		close(g_ms.heredoc_fd[0]);
	if (g_ms.heredoc_fd[1] > 2)
		close(g_ms.heredoc_fd[1]);
}

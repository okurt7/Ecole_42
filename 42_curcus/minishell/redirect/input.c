/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:54:40 by okurt             #+#    #+#             */
/*   Updated: 2023/05/02 18:54:41 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	input(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (is_parent())
	{
		if (fd == -1)
		{
			g_ms.ignore = TRUE;
			return (no_file_err(file));
		}
		if (g_ms.heredoc_fd[0] > 2)
			dup2(fd, g_ms.heredoc_fd[0]);
	}
	else
	{
		if (fd == -1)
			no_file_err(file);
		dup2(fd, 0);
	}
	if (fd != -1)
		close(fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:55:41 by okurt             #+#    #+#             */
/*   Updated: 2023/05/02 18:55:42 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_builtin(char *command)
{
	if (ft_strcmp(command, "cd"))
		return (CD);
	if (ft_strcmp(command, "env"))
		return (ENV);
	if (ft_strcmp(command, "pwd"))
		return (PWD);
	if (ft_strcmp(command, "echo"))
		return (ECHO);
	if (ft_strcmp(command, "exit"))
		return (EXIT);
	if (ft_strcmp(command, "unset"))
		return (UNSET);
	if (ft_strcmp(command, "export"))
		return (EXPORT);
	return (0);
}

void	run_builtin(char **execute)
{
	int	type;

	type = is_builtin(execute[0]);
	if (type == CD)
		builtin_cd(execute);
	if (type == ENV)
		builtin_env();
	if (type == PWD)
		builtin_pwd();
	if (type == ECHO)
		builtin_echo(execute);
	if (type == EXIT)
		builtin_exit(execute);
	if (type == UNSET)
		builtin_unset(execute);
	if (type == EXPORT)
		builtin_export(execute);
}

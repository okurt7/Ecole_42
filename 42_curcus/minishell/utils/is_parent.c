/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_parent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:54:08 by okurt             #+#    #+#             */
/*   Updated: 2023/05/02 18:54:09 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_parent(void)
{
	return (g_ms.parent_pid == getpid());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <okurt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:55:12 by okurt             #+#    #+#             */
/*   Updated: 2023/05/02 18:55:13 by okurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	free_token(void)
{
	t_token		*tmp;
	t_token		*token;

	token = g_ms.token;
	while (token)
	{
		free(token->str);
		token = token->next;
	}
	token = g_ms.token;
	while (token)
	{
		tmp = token;
		token = token->next;
		free(tmp);
	}
}

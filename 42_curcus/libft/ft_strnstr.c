/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:43:46 by okurt             #+#    #+#             */
/*   Updated: 2022/02/10 19:03:48 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *need, size_t len)
{
	size_t	i;
	size_t	c;

	if (need[0] == '\0')
		return ((char *)stack);
	i = 0;
	while (stack[i] != '\0' && i < len)
	{
		c = 0;
		while ((stack[i + c] == need[c]) && (i + c) < len)
		{
			if (need[c + 1] == '\0')
				return ((char *)(&stack[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}

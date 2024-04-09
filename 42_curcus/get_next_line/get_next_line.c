/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:30:58 by okurt             #+#    #+#             */
/*   Updated: 2022/08/20 15:31:19 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char	*get_line(char *str)
{
	int			i;
	char		*line;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * i + 2);
	if (!line)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_save(char *str)
{
	int			i;
	int			j;
	char		*new_line;

	i = 0;
	j = ft_strlen(str);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (0);
	}
	new_line = (char *)malloc(sizeof(char) * (j - i) + 1);
	if (!new_line)
		return (0);
	j = 0;
	i++;
	while (str[i] != '\0')
		new_line[j++] = str[i++];
	new_line[j] = '\0';
	free(str);
	return (new_line);
}

char	*read_and_copy(int fd, char *str)
{
	int			i;
	char		*copy;

	copy = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!copy)
		return (0);
	i = 1;
	while (!ft_strchr(str, '\n') && i != 0)
	{
		i = read(fd, copy, BUFFER_SIZE);
		if (i < 0)
		{
			free(copy);
			return (0);
		}
		copy[i] = '\0';
		str = ft_strjoin(str, copy);
	}
	free(copy);
	return (str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*str;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	str = read_and_copy(fd, str);
	if (!str)
		return (0);
	line = get_line(str);
	str = get_save(str);
	return (line);
}

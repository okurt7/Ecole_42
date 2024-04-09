/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:53:46 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 19:53:48 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		index;

	index = 1;
	tmp = n;
	while (tmp && index++)
		tmp /= 10;
	str = (char *)malloc(sizeof(char) *((n < 0) + index + (n == 0)));
	if (!str)
		return (NULL);
	str += (n < 0) + index - 1 + (n == 0);
	*str = '\0';
	if (n == 0)
		*(--str) = '0';
	index = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--str) = (n % (10 * index)) * index + '0';
		n /= 10;
	}
	if (index < 0)
		*(--str) = '-';
	return (str);
}

char	*ft_strdup(const char *str1)
{
	int		size;
	char	*ptr;

	size = ft_strlen((char *)str1);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, str1, size);
	ptr[size] = '\0';
	return (ptr);
}

void	*ft_memcpy(void *dest, const void *source, size_t byt)
{
	size_t	i;
	char	*dst;
	char	*src;

	if (!dest && !source)
		return (NULL);
	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	while (i < byt)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void	check_letter(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < data->map_heigth)
	{
		while (i < data->map_width)
		{
			if (data->map[j][i] != 'E' && data->map[j][i] != 'P' \
			&& data->map[j][i] != 'C' && data->map[j][i] != '1' \
			&& data->map[j][i] != '0')
				ft_error();
			i++;
		}
		i = 0;
		j++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:03:03 by okurt             #+#    #+#             */
/*   Updated: 2023/01/14 20:03:06 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 45
# endif

size_t	ft_strlen_gnl(char *buf);
char	*get_next_line(int fd);
char	*get_new_line(char *buffer);
char	*get_line(int fd, char *buffer);
char	*strjoin(char *s1, char *s2);
char	*get_new_buffer(char *buffer);
int		find_nl_char(char *buffer);

#endif

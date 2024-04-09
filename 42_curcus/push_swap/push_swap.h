/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:17:55 by okurt             #+#    #+#             */
/*   Updated: 2023/01/23 16:18:00 by okurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_base_var
{
	char	**argv;
	int		argc;
	int		bit_count;
	int		a_len;
	int		b_len;
	int		size;
	int		*arr_a;
	int		*arr_b;
}				t_base_var;

void	ft_base_be_zero(t_base_var *base);
void	push_swap(t_base_var *base);

void	ft_argument(t_base_var *base);
void	ft_null(char *arg);
void	ft_empty(char *arg);
void	ft_charset(char *arg);
void	ft_number(char *arg);

void	ft_parse(t_base_var *base);
int		ft_count(char *arg);
void	ft_arr_size(t_base_var *base);
void	ft_arr_allocate(t_base_var *base);
void	ft_split(t_base_var *base);
long	ft_atoi(char *str);
void	ft_range(t_base_var *base, long number);
void	ft_insert_number(t_base_var *base, char *arg, int *arr_idx);
void	ft_dublicate(t_base_var *base);

void	ft_sort(t_base_var *base);
void	ft_sorted_or_not(t_base_var *base);
int		ft_sorted_or_not_bool(t_base_var *base);
int		*ft_bubble_sort(t_base_var *base);
void	ft_indexing(t_base_var *base, int *sorted_arr);
void	ft_bit_count(t_base_var *base);
void	ft_radix(t_base_var *base);
void	ft_mini_sort(t_base_var *base);

int		ft_is_digit(char c);
int		ft_contains(char *source, char c);
void	ft_message(char *str, int fd);

void	sa(t_base_var *base);
void	pa(t_base_var *base);
void	pb(t_base_var *base);
void	ra(t_base_var *base);
void	rra(t_base_var *base);

#endif

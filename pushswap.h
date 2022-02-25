/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:22:43 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:16 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

# define ON 1
# define OFF 0

typedef struct tab
{
	int	size;
	int	used_size;
	int	*tab;
}	t_tab;

typedef struct stack
{
	t_tab	stack_a;
	t_tab	stack_b;
}	t_stacks;

int			ft_strcmp(char *s1, char *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t ds);
size_t		ft_strlen(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
char		*get_next_line(int fd);

void		ft_clear_first_elm(int *tab, int used_size);
void		ft_remove_first_elm(int *tab, int used_size);
void		ft_sa_or_sb(t_tab *tab, int type, char stack);
void		ft_sa_and_sb(t_stacks *stacks, int type);
void		ft_pa(t_stacks *stacks, int type);
void		ft_pb(t_stacks *stacks, int type);
void		ft_ra(t_tab *stack_a, int type);
void		ft_rb(t_tab *stack_b, int type);
void		ft_ra_and_rb(t_stacks *stacks, int type);
void		ft_rra(t_tab *stack_a, int type);
void		ft_rrb(t_tab *stack_b, int type);
void		ft_rra_and_rrb(t_stacks *stacks, int type);

int			ft_check_number(char *number);
int			ft_check_duplicates(t_stacks *stacks, int number);
int			ft_check_sorted(t_tab *tab);
int			ft_count_numbers(char *string);
int			ft_err_and_free(t_stacks *stacks, char *message, int ret);

int			ft_check_arg(char *av);
int			ft_size_of_av(char **av);
char		*ft_arg_to_string(char **av);
char		**ft_stacks_init(char *string, t_stacks *stacks);
t_stacks	ft_create_stack(char *str);

int			ft_get_smallest_index(t_tab *stack_a);
void		ft_find_smallest_number(t_stacks *stacks);
void		ft_find_smallest_number_then(t_stacks *stacks);
int			ft_find_key_number(int *sorted_list, int size, \
int divided, int chunks);
int			ft_get_biggest_index(t_tab *stack_b);
void		ft_find_biggest_number(t_stacks *stacks);
int			*ft_sort_tab(t_tab *stack_a);
void		ft_sort_rest(t_stacks *stacks);

void		ft_sort_three_numbers(t_tab *stack_a);
void		ft_sort_five_numbers_utils(t_stacks *stacks, int *i);
void		ft_sort_five_numbers(t_stacks *stacks);
void		ft_sort_then_numbers(t_stacks *stacks);
void		ft_sort_one_handred(t_stacks *stacks);
void		ft_sort_five_handred(t_stacks *stacks);
void		ft_sort_more_then_handred(t_stacks *stacks);
void		ft_sort_rest_of_numbers(t_stacks *stacks, int size);

#endif
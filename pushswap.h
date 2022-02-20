/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:22:43 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/19 21:51:35 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

# define	ON 1
# define	OFF 0

typedef struct tab
{
   
    int size;
    int used_size;
    int *tab;
}               s_tab;

typedef struct stack 
{
    s_tab stack_a;
    s_tab stack_b;
}  s_stacks;

void		ft_swap(int *left, int *right);
void		ft_sort_rest(s_stacks *stacks);
void		ft_sort_more_then_handred(s_stacks *stacks);
void		ft_find_smallest_number_ten(s_stacks *stacks);
void		ft_sort_ten_numbers(s_stacks *stacks);
void		ft_sort_three_numbers(s_tab *stack_a);
void        ft_sort_five_numbers(s_stacks *stacks);

int			ft_get_biggest_index(s_tab *stack_b);

int			ft_count_numbers(char *string);
int			ft_check_sorted(s_tab *tab);
int			ft_check_duplicates(s_stacks *stacks, int number);
int			ft_check_number(char *number);
int			ft_err_and_free(s_stacks *stacks, char *message, int ret);
int			*ft_save_list(s_tab *stack_a);
int			*ft_sort_tab(s_tab *stack_a);
int			ft_search_index(s_stacks *stacks, int key_number);
int			ft_get_smallest_index(s_tab *stack_a);
int         ft_check_arg(char *av);
int			ft_find_key_number(int *sorted_list, int size,
				int divided, int chunks);

void		ft_remove_first_elm(int *tab, int used_size);
void		ft_clear_first_elm(int *tab, int used_size);
void		ft_pa(s_stacks *stacks, int type);
void		ft_pb(s_stacks *stacks, int type);
void		ft_rra(s_tab *stack_a, int type);
void		ft_rrb(s_tab *stack_b, int type);
void		ft_rra_and_rrb(s_stacks *stacks, int type);
void		ft_sa_or_sb(s_tab *tab, int type, char stack);
void		ft_sa_and_sb(s_stacks *stacks, int type);
void		ft_ra(s_tab *stack_a, int type);
void		ft_rb(s_tab *stack_b, int type);
void		ft_ra_and_rb(s_stacks *stacks, int type);

char		*ft_arg_to_string(char **av);
s_stacks	ft_create_stack(char *str);
int			ft_size_of_av(char **av);
char		**ft_stacks_init(char *string, s_stacks *stacks);


int	ft_strcmp(char *s1, char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t ds);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*get_next_line(int fd);

#endif
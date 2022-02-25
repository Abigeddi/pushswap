/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:45:55 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/23 21:54:33 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_swap(int *left, int *right) // swap the first nb with the 2nd one
{
	int	tmp;

	tmp = *left;
	*left = *right;
	*right = tmp;
}

int	*ft_save_list(s_tab *stack_a) // store all the numbers from stack a to a new tab 
{
	int	i;
	int	*stored_list;

	i = 0;
	stored_list = malloc(sizeof(int) * stack_a->size);
	while (i < stack_a->size)
	{
		stored_list[i] = stack_a->tab[i];
		i++;
	}
	return (stored_list);
}

int	*ft_sort_tab(s_tab *stack_a) // sort the numbers in the new stack (bubble sort)
{
	int	i;
	int	j;
	int	smallest_index;
	int	*sorted_list;

	i = 0;
	sorted_list = ft_save_list(stack_a);
	while (i < stack_a->size - 1)
	{
		smallest_index = i;
		j = i + 1;
		while (j < stack_a->size)
		{
			if (sorted_list[j] < sorted_list[smallest_index])
				smallest_index = j;
			j++;
		}
		ft_swap(&sorted_list[smallest_index], &sorted_list[i]);
		i++;
	}
	return (sorted_list);
}

void	ft_sort_rest(s_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			ft_sa_or_sb(&stacks->stack_a, ON, 'a');
	}
	if (stacks->stack_a.used_size == 3)
		ft_sort_three_numbers(&stacks->stack_a);
	if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_sort_five_numbers(stacks);
	if (stacks->stack_a.used_size > 5)
		ft_sort_rest_of_numbers(stacks, stacks->stack_a.used_size);
}

void 	ft_sort_more_then_handred(s_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			ft_sa_or_sb(&stacks->stack_a, ON, 'a');
	}
	else if (stacks->stack_a.used_size == 3)
		ft_sort_three_numbers(&stacks->stack_a);
	else if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_sort_five_numbers(stacks);
	else if (stacks->stack_a.used_size > 5 && stacks->stack_a.used_size <= 10)
		ft_sort_rest_of_numbers(stacks, stacks->stack_a.used_size);
	else if (stacks->stack_a.used_size > 10)
		ft_sort_one_handred(stacks);
}
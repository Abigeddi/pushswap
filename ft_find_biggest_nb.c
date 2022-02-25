/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_nb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:36:59 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/23 23:46:26 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sort_rest_of_numbers(s_stacks *stacks, int size)
{
	if (!ft_check_sorted(&stacks->stack_a))
	{
		while (stacks->stack_a.used_size >= 5)
		{
			ft_find_smallest_number_then(stacks);
			ft_pb(stacks, ON);
		}
		ft_sort_five_numbers(stacks);
		while (stacks->stack_a.used_size != size)
			ft_pa(stacks, ON);
	}
}

int	ft_find_key_number(int *sorted_list, int size, int divided, int chunks)
{
	int	key_munber;

	key_munber = sorted_list[(size * divided) / chunks];
	return (key_munber);
}

int	ft_get_biggest_index(s_tab *stack_b)
{
	int	i;
	int	b_index;

	i = 0;
	b_index = i;
	while (i < stack_b->used_size)
	{
		if (stack_b->tab[b_index] < stack_b->tab[i])
			b_index = i;
		i++;
	}
	return (b_index);
}

void	ft_find_biggest_number(s_stacks *stacks)
{
	int	b_index;

	b_index = ft_get_biggest_index(&stacks->stack_b);
	while (b_index != 0)
	{
		if (b_index <= (stacks->stack_b.used_size / 2))
			ft_rb(&stacks->stack_b, ON);
		else
			ft_rrb(&stacks->stack_b, ON);
		b_index = ft_get_biggest_index(&stacks->stack_b);
	}
}
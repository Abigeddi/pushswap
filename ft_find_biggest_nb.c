/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_nb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:36:59 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:52:24 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

void	ft_sort_rest_of_numbers(t_stacks *stacks, int size)
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

int	ft_get_biggest_index(t_tab *stack_b)
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

void	ft_find_biggest_number(t_stacks *stacks)
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

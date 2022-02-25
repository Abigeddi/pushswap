/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_handred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 03:53:55 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:41:32 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_search_index(t_stacks *stacks, int key_number)
{
	int	i;

	i = 0;
	while (i < stacks->stack_a.used_size)
	{
		if (stacks->stack_a.tab[i] <= key_number)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_move_to_top(t_stacks *stacks, int index)
{
	int	divid;

	divid = stacks->stack_a.used_size / 2;
	while (index != 0)
	{
		if (index <= divid)
		{
			ft_ra(&stacks->stack_a, ON);
			index--;
		}
		else
		{
			ft_rra(&stacks->stack_a, ON);
			index++;
			if (index == stacks->stack_a.used_size)
				break ;
		}
	}
}

void	ft_push_index(t_stacks *stacks, int key_number)
{
	int	index;

	index = ft_search_index(stacks, key_number);
	while (index != -1)
	{
		ft_move_to_top(stacks, index);
		ft_pb(stacks, ON);
		index = ft_search_index(stacks, key_number);
	}
}

void	ft_sort_one_handred(t_stacks *stacks)
{
	unsigned int	i ;
	int				key_number;
	int				*sorted_list;

	i = 1;
	sorted_list = ft_sort_tab(&stacks->stack_a);
	while (i != 4)
	{
		key_number = ft_find_key_number(sorted_list,
				stacks->stack_a.size, i, 4);
		ft_push_index(stacks, key_number);
		i++;
	}
	free (sorted_list);
	ft_sort_rest(stacks);
	while (stacks->stack_b.used_size != 0)
	{
		ft_find_biggest_number(stacks);
		ft_pa(stacks, ON);
	}
}

void	ft_sort_five_handred(t_stacks *stacks)
{
	int	i;
	int	key_number;
	int	*sorted_list;

	i = 1;
	sorted_list = ft_sort_tab(&stacks->stack_a);
	while (i != 8)
	{
		key_number = ft_find_key_number(sorted_list,
				stacks->stack_a.size, i, 8);
		ft_push_index(stacks, key_number);
		i++;
	}
	free (sorted_list);
	ft_sort_more_then_handred(stacks);
	while (stacks->stack_b.used_size != 0)
	{
		ft_find_biggest_number(stacks);
		ft_pa(stacks, ON);
	}
}

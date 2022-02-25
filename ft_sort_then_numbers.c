/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_then_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 05:24:51 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 06:33:08 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_find_smallest_number_then(s_stacks *stacks)
{
	int index;

	index = ft_get_smallest_index(&stacks->stack_a);
	while (index != 0)
	{
		if (index <= 5)
			ft_ra(&stacks->stack_a, ON);
		else
			ft_rra(&stacks->stack_a,ON);
		index = ft_get_smallest_index(&stacks->stack_a);
	}
}

void ft_sort_then_numbers (s_stacks *stacks)
{
    if (!ft_check_sorted(&stacks->stack_a))
	{
		while (stacks->stack_a.used_size != 5 && !(ft_check_sorted(&stacks->stack_a)))
		{
			ft_find_smallest_number_then(stacks);
			if (!(ft_check_sorted(&stacks->stack_a)))
				ft_pb(stacks,ON);
		}
		ft_sort_five_numbers(stacks);
		while (stacks->stack_a.used_size != stacks->stack_a.size)
			ft_pa(stacks,ON);
	}
}
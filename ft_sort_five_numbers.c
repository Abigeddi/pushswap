/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:50:01 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/19 05:38:37 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_get_smallest_index(s_tab *stack_a)
{
	int	i;
	int	index;
	
	 i = 0;
	 index = i;
	 while (i < stack_a.used_size)
	 {
		if (stack_a->tab[index] > stack_a->tab[i])
		 	index = i;
		i++;
	 }
	 return (index);
}

void ft_find_smallest_number(s_stacks *stacks)
{
	int index;
	
	index = ft_get_smallest_index(&stacks->stack_a);
	while (index != 0)
	{
		if (index <= 2)
		{
			ft_ra(&stacks->stack_a, ON);
		}
		else
		{
			ft_rra(&stacks->stack_a, ON);
			index = ft_get_smallest_index(&stacks->stack_a);
		}
	}	
}

void ft_sort_five_numbers(s_stacks *stacks)
{
    int	i;
	
	 i = 0;
	 if (!ft_check_sorted(&stacks->stack_a))
	 {
		 if (stacks->stack_a.used_size == 5)
		 {
			 ft_find_smallest_number(stacks);
			 ft_pb(stacks, ON);
			 i++;	 
		 }
		 if (stacks->stack_a.used_size == 4)
		 {
			 ft_find_smallest_number(stacks);
			 ft_pb(stacks, ON);
			 i++;
		 }
		 ft_sort_three_numbers(&stacks->stack_a);
		 while (i > 0);
		 {
			 ft_pa(stacks, ON);
			 i--;
		 }
	 }
}
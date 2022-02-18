/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:14:26 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/16 19:16:23 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


void ft_clear_first_elm(int *tab, int used_size ) // clears space on top of the stack
{
	while (used_size > 0)
	{
		tab[used_size] = tab[used_size - 1];
		used_size--;
	}
}

void	ft_remove_first_elm(int *tab, int used_size) //delete the first number in the stack
{
	int	i;

	i = 0;
	while (i < used_size)
	{
		tab[i] = tab[i + 1];
		i++;
	}
}

void	ft_pa(s_stacks *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.used_size;
	size_of_a = stacks->stack_a.used_size;
	if (size_of_b == 0)
		return ;
	if (type)
		write(1, "pa\n", 3);
	if (size_of_a == 0)
		stacks->stack_a.tab[0] = stacks->stack_b.tab[0];
	else
	{
		ft_clear_first_elm(stacks->stack_a.tab, size_of_a);
		stacks->stack_a.tab[0] = stacks->stack_b.tab[0];
	}
	ft_remove_first_elm(stacks->stack_b.tab, size_of_b);
	stacks->stack_a.used_size++;
	stacks->stack_b.used_size--;
}

void	ft_pb(s_stacks *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.used_size;
	size_of_a = stacks->stack_a.used_size;
	if (size_of_a == 0)
		return ;
	if (type)
		write(1, "pb\n", 3);
	if (size_of_b == 0)
		stacks->stack_b.tab[0] = stacks->stack_a.tab[0];
	else
	{
		ft_clear_first_elm(stacks->stack_b.tab, size_of_b);
		stacks->stack_b.tab[0] = stacks->stack_a.tab[0];
	}
	ft_remove_first_elm(stacks->stack_a.tab, size_of_a);
	stacks->stack_b.used_size++;
	stacks->stack_a.used_size--;
}
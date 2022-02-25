/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:27:10 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:41:21 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rra(t_tab *stack_a, int type)
{
	int	last_elm;

	if (type)
		write (1, "rra\n", 4);
	last_elm = stack_a->tab[stack_a->used_size - 1];
	ft_clear_first_elm(stack_a->tab, stack_a->used_size);
	stack_a->tab[0] = last_elm;
}

void	ft_rrb(t_tab *stack_b, int type)
{
	int	last_elm;

	if (type)
		write (1, "rrb\n", 4);
	last_elm = stack_b->tab[stack_b->used_size - 1];
	ft_clear_first_elm(stack_b->tab, stack_b->used_size);
	stack_b->tab[0] = last_elm;
}

void	ft_rra_and_rrb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "rrr\n", 4);
	ft_rra(&stacks->stack_a, OFF);
	ft_rrb(&stacks->stack_b, OFF);
}

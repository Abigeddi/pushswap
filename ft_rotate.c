/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:46:36 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:41:24 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ra(t_tab *stack_a, int type)
{
	int	first_elm;

	if (type)
		write(1, "ra\n", 3);
	first_elm = stack_a->tab[0];
	ft_remove_first_elm(stack_a->tab, stack_a->used_size);
	stack_a->tab[stack_a->used_size - 1] = first_elm;
}

void	ft_rb(t_tab *stack_b, int type)
{
	int	first_elm;

	if (type)
		write(1, "rb\n", 3);
	first_elm = stack_b->tab[0];
	ft_remove_first_elm(stack_b->tab, stack_b->used_size);
	stack_b->tab[stack_b->used_size - 1] = first_elm;
}

void	ft_ra_and_rb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "rr\n", 3);
	ft_ra(&stacks->stack_a, OFF);
	ft_rb(&stacks->stack_b, OFF);
}

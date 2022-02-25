/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:58:18 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:41:49 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa_or_sb(t_tab *tab, int type, char stack)
{
	int	tmp;

	if (type && stack == 'a')
		write(1, "sa\n", 3);
	else if (type && stack == 'b')
		write(1, "sb\n", 3);
	if (tab->used_size > 1)
	{
		tmp = tab->tab[0];
		tab->tab[0] = tab->tab[1];
		tab->tab[1] = tmp;
	}
}

void	ft_sa_and_sb(t_stacks *stacks, int type)
{
	if (type)
		write (1, "ss\n", 3);
	ft_sa_or_sb(&stacks->stack_a, OFF, 'a');
	ft_sa_or_sb(&stacks->stack_b, OFF, 'b');
}

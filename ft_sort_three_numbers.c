/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:29:14 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/19 02:49:21 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ft_sort_three_numbers(s_tab *stack_a)
{
    if (stack_a->tab[0] > stack_a->tab[1])
        ft_sa_or_sb(stack_a,ON,'a');
    if(!(ft_check_sorted(stack_a)))
        ft_rra(stack_a,'a');
	if(stack_a->tab[0] > stack_a->tab[1])
		ft_sa_or_sb(stack_a, ON,'a');
}
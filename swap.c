/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:57:29 by abigeddi          #+#    #+#             */
/*   Updated: 2022/01/15 18:59:20 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void swap_a(t_list **l_a)
{
	  t_list	*tmp;

  tmp = *l_a;
  tmp = tmp->next;
  (*l_a)->next = tmp->next;
  tmp->next = *l_a;
  *l_a = tmp;
}

void swap_b(t_list **l_b)
{
	  t_list	*tmp;

  tmp = *l_b;
  tmp = tmp->next;
  (*l_b)->next = tmp->next;
  tmp->next = *l_b;
  *l_b = tmp;
}

void swap_s(t_list **l_a, t_list **l_b)
{
    swap_a(l_a);
    swap_b(l_b);
}
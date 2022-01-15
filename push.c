/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:02:25 by abigeddi          #+#    #+#             */
/*   Updated: 2022/01/15 19:03:43 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


t_list		*my_add_in_list(t_list *list, int nb)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp->content = nb;
  tmp->next = list;
  list = tmp;
  return (list);
}

void		pa(t_list **l_a, t_list **l_b)
{
  int		nb;

  if (*l_b == NULL)
    return;
  nb = (*l_b)->content;
  *l_a = my_add_in_list(*l_a, nb);
  *l_b = (*l_b)->next;
}

void		pb(t_list **l_a, t_list **l_b)
{
 int		nb;

 if (*l_a == NULL)
   return;
  nb = (*l_a)->content;
  *l_b = my_add_in_list(*l_b, nb);
  *l_a = (*l_a)->next;
}
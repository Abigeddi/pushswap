/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:22:18 by abigeddi          #+#    #+#             */
/*   Updated: 2022/01/15 18:13:40 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lstnew(t_list *copy,int content)
{

	copy = (t_list *)malloc(sizeof(t_list));
	if (!copy)
		return (0);
	copy->content = content;
	copy->next = NULL;
	return (copy);
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new ;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
		ft_lstadd_front(alst, new);
	else
		ft_lstlast(*alst)->next = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*copy;

	if (!lst)
		return (NULL);
	while (lst)
	{
		copy = lst;
		lst = lst->next;
	}
	return (copy);
}
void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*copy;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		copy = (*lst);
		(*lst) = (*lst)->next;
		del((copy)->content);
		free(copy);
	}
}
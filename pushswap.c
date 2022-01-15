/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:53:14 by abigeddi          #+#    #+#             */
/*   Updated: 2022/01/15 18:57:16 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int    ft_atoi(const char *str)
{
    int    sign;
    int    i;
    int    result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
         str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result * sign);
}

int main (int ac, char **av)
{
    int i;
    i = 0;
    t_list  *ptr;
    t_list *head;
    head = NULL;
    if(av[i])
    {
        ft_lstnew(head,ft_atoi(av[i]));
        i++;
    }
    while(i < ac)
    {
        ft_lstadd_back(&head, ft_lstnew(head,ft_atoi(av[i])));
        i++;
    }

	swap_a(&head);
    while(head != NULL)
    {
         printf("%d \n", head->content);
         head= head->next;
    }
	
    return 0;

}
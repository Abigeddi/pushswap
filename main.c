/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:17:06 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/19 21:58:36 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char *av[])
{
	s_stacks	stacks;
	char		*str;

	ac--;
	if (ac != 0)
	{
		str = ft_arg_to_string(av);
		stacks = ft_create_stack(str);
		if (ft_check_sorted(&stacks.stack_a))
			return (ft_err_and_free(&stacks, NULL, 0));
		else if (stacks.stack_a.size == 2)
			ft_sa_or_sb(&stacks.stack_a, ON, 'a');
		else if (stacks.stack_a.size == 3)
			ft_sort_three_numbers(&stacks.stack_a);
		else if (stacks.stack_a.size == 4 || stacks.stack_a.size == 5)
			ft_sort_five_numbers(&stacks);
		ft_err_and_free(&stacks, NULL, 0);
	}
	return (0);
}
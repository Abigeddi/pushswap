/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:17:06 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/17 21:59:24 by abigeddi         ###   ########.fr       */
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
		
	}
	return (0);
}
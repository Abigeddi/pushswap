/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:49:08 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/25 23:41:03 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_check_number(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '-')
		i++;
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_duplicates(t_stacks *stacks, int number)
{
	int	size;
	int	i;

	i = 0;
	size = stacks->stack_a.used_size;
	if (size == 0)
		return (1);
	while (i < size)
	{
		if (stacks->stack_a.tab[i] == number)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_sorted(t_tab *tab)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = tab->tab;
	while (i < tab->used_size - 1)
	{
		if (tmp[i] > tmp[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_numbers(char *string)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

int	ft_err_and_free(t_stacks *stacks, char *message, int ret)
{
	if (stacks)
	{
		if (stacks->stack_a.tab)
			free(stacks->stack_a.tab);
		if (stacks->stack_b.tab)
			free(stacks->stack_b.tab);
	}
	if (message != NULL)
		write(1, "Error\n", 6);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check-error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:49:08 by abigeddi          #+#    #+#             */
/*   Updated: 2022/02/16 21:49:50 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_check_number(char *number) // check if the given char is a number at a given point 
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

int	ft_check_duplicates(s_stacks *stacks, int number)  // checks for duplicate numbers 
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

int	ft_check_sorted(s_tab *tab) // check if the stack is sorted
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

int	ft_count_numbers(char *string) // counts numbers :^)
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

int	ft_err_and_free(s_stacks *stacks, char *message, int ret) //prints out ERROR meg and frees the stack's
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
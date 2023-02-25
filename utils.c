/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:45:06 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/24 13:11:10 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*in_array(t_stack *stack_a)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(4 * ft_lstsize(stack_a));
	while (stack_a)
	{
		arr[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	return (arr);
}

void	check_dup(t_stack *stack_a)
{
	int	*arr;
	int	size;
	int	i;
	int	j;

	arr = in_array(stack_a);
	size = ft_lstsize(stack_a);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				print_error();
			j++;
		}
		i++;
	}
	free(arr);
}

void	fill_stack_a(t_stack **stack_a, char **sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(sep[i])));
		i++;
	}
	check_dup(*stack_a);
}

int	*sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	*reference_tab(t_stack *stack)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(stack);
	tab = malloc((size) * sizeof(int));
	while (stack)
	{
		tab[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (sort_tab(tab, size));
}

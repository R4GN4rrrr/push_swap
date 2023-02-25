/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:45:06 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/25 01:41:39 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*courant;

	courant = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (courant -> next)
			courant = courant -> next;
		courant -> next = new;
	}
}

int	ft_lstsize(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

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
	int	i;
	int	j;
	int	*arr;
	int	size;

	size = ft_lstsize(stack_a);
	arr = in_array(stack_a);
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
		free(sep[i]);
		i++;
	}
	free(sep);
	check_dup(*stack_a);
}

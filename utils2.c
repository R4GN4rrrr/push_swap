/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:44:57 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/24 11:37:30 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_stack *stack)
{
	int	x;

	x = stack->value;
	while (stack)
	{
		if (x > stack->value)
			x = stack->value;
		stack = stack->next;
	}
	return (x);
}

int	ft_find_max(t_stack *stack)
{
	int	y;
	int	i;
	int	max;

	i = 0;
	max = 0;
	y = stack->value;
	while (stack)
	{
		if (y < stack->value)
		{
			y = stack->value;
			max = i;
		}
		stack = stack->next;
		i++;
	}
	return (max);
}

int	ft_pos(t_stack *stack_a, int x)
{
	int	i;

	i = 0;
	while (stack_a->value != x)
	{
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	check_digit(char	**str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			if (!ft_isdigit(str[i][++j]))
				print_error();
		}
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				print_error();
			j++;
		}
		i++;
	}
}

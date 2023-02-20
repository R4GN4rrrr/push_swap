/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:44:57 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/19 04:02:18 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_find_min(t_stack *stack)
{
	int x;

	x = stack->value;
	while (stack)
	{
		if (x > stack->value)
			 x = stack->value;
		stack = stack->next;
	}
	return (x);
}

int ft_pos(t_stack *stack_a, int x)
{
	int i;

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
	int	p = 0;
	int	m = 0;

	i = 0;
	if (!str[0])
		print_error();
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if ((str[i][j] < '0' || str[i][j] > '9') && (str[i][j] != '+' && str[i][j] != '-'))
				print_error();
			if (str[i][j] == '+')
				p++;
			if (str[i][j] == '-')
				m++;
			j++;
		}
		if (p > 1 || m > 1)
			print_error();
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 03:25:03 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/23 01:23:52 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_three(t_stack **stack_a)
{
	if (((*stack_a)->value < (*stack_a)->next->value)
		&& ((*stack_a)->value < (*stack_a)->next->next->value))
	{
		if ((*stack_a)->next->value > (*stack_a)->next->next->value)
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	else if (((*stack_a)->value > (*stack_a)->next->value)
		&& ((*stack_a)->value < (*stack_a)->next->next->value))
		sa(stack_a);
	else if (((*stack_a)->value < (*stack_a)->next->value)
		&& ((*stack_a)->value > (*stack_a)->next->next->value))
		rra(stack_a);
	else if (((*stack_a)->value > (*stack_a)->next->value)
		&& ((*stack_a)->value > (*stack_a)->next->next->value))
	{
		if ((*stack_a)->next->value < (*stack_a)->next->next->value)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	x;

	while (ft_lstsize(*stack_a) > 3 && ft_lstsize(*stack_a) < 6)
	{
		x = ft_find_min(*stack_a);
		while (x != (*stack_a)->value)
		{
			if (ft_pos(*stack_a, x) > ft_lstsize(*stack_a) / 2)
				rra(stack_a);
			else
				ra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	sort_hundred(t_stack **stack_a, t_stack **stack_b, int range)
{
	int	*tab;

	tab = reference_tab(*stack_a);
	push_a_to_b(stack_a, stack_b, tab, range);
	while (*stack_b)
	{
		send_big_to_top(stack_b);
		pa(stack_a, stack_b);
	}
}

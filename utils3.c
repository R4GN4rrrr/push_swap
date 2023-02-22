/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:41:00 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/22 00:57:20 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_big_to_top(t_stack **stack)
{
	int i;
	int size;

	while (1)
	{
		i = ft_find_max(*stack);
		size = ft_lstsize(*stack);
		if (i == 0)
			break ;
		if (i > size / 2)
			rrb(stack);
		else if (i <= size / 2)
			rb(stack);
	}
}

void	push_a_to_b(t_stack  **stack_a, t_stack **stack_b, int *tab, int range)
{
	int i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->value <= tab[i])
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->value > tab[i] && (*stack_a)->value <= tab[range + i])
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);

	}
}
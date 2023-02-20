/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:57:32 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/17 01:58:39 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
    
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}

//Swaps the top 2 elements of stack a.
void    sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}


//Swaps the top 2 elements of stack b.
void    sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

//Swaps the top 2 elements of stack a and the top 2 elements of stack b.
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}
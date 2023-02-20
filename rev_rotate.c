/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:58:23 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/17 21:11:54 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Brings the bottom element of a stack to the top.
static void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*bottom;
	t_stack	*before_last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;

	bottom = get_stack_bottom(*stack);
	before_last = get_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = bottom;
	(*stack)->next = tmp;
	before_last->next = NULL;
}

void	rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	ft_putstr("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	ft_putstr("rrb\n");
}

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_putstr("rrr\n");
}

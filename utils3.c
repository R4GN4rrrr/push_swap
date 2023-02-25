/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:41:00 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/24 10:54:25 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*content;

	content = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (content -> next)
			content = content -> next;
		content -> next = new;
	}
}

t_stack	*ft_lstnew(int value)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->value = value;
	head->next = NULL;
	return (head);
}

void	send_big_to_top(t_stack **stack)
{
	int	i;
	int	size;

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

void	push_a_to_b(t_stack **stack_a, t_stack **stack_b, int *tab, int range)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->value <= tab[i])
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->value > tab[i]
			&& (*stack_a)->value <= tab[range + i])
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

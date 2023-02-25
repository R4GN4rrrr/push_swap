/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 08:52:11 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/25 01:33:14 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;

	stack_size = ft_lstsize(*stack_a);
	if (stack_size == 2 && !sorted(*stack_a))
		sort_two(stack_a);
	else if (stack_size == 3)
		sort_three(stack_a);
	else if (stack_size > 3 && stack_size < 6 && !sorted(*stack_a))
		sort_five(stack_a, stack_b);
	else if (stack_size <= 100 && !sorted(*stack_a))
		sort_hundred(stack_a, stack_b, 15);
	else if (stack_size <= 500 && !sorted(*stack_a))
		sort_hundred(stack_a, stack_b, 36);
}

char	*parse(char **av)
{
	int		i;
	int		j;
	char	*numbers;

	i = 1;
	numbers = NULL;
	while (av[i])
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		if (!av[i][j])
			print_error();
		numbers = ft_strjoin(numbers, av[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	return (numbers);
}

int	main(int ac, char **av)
{
	char	**sep;
	char	*numbers;
	t_stack	*stack_b;
	t_stack	*stack_a;

	numbers = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac >= 2)
	{
		numbers = parse(av);
		sep = ft_split(numbers, ' ');
		free(numbers);
		check_digit(sep);
		fill_stack_a(&stack_a, sep);
		push_swap(&stack_a, &stack_b);
	}
}

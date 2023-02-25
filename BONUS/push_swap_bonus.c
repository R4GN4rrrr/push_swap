/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:44:01 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/25 01:44:14 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_actions(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0 && line)
		sa(stack_a);
	else if (line && ft_strcmp(line, "sb\n") == 0)
		sb(stack_b);
	else if (line && ft_strcmp(line, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (line && ft_strcmp(line, "pa\n") == 0)
		pa(stack_a, stack_b);
	else if (line && ft_strcmp(line, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (line && ft_strcmp(line, "rra\n") == 0)
		rra(stack_a);
	else if (line && ft_strcmp(line, "rrb\n") == 0)
		rrb(stack_b);
	else if (line && ft_strcmp(line, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else if (line && ft_strcmp(line, "ra\n") == 0)
		ra(stack_a);
	else if (line && ft_strcmp(line, "rb\n") == 0)
		rb(stack_b);
	else if (line && ft_strcmp(line, "rr\n") == 0)
		rr(stack_a, stack_b);
	else
		print_error();
}

void	input_readed(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		check_actions(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
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
		input_readed(&stack_a, &stack_b);
		if (sorted(stack_a) && stack_b == NULL)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
}

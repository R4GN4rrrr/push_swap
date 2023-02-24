/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:35:05 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/24 04:46:42 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
t_stack	*get_stack_bottom(t_stack *stack);
t_stack	*get_stack_before_bottom(t_stack *stack);
void	ft_putstr(char *str);
char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int value);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_atoi(const char *str);
void	fill_stack_a(t_stack **stack_a, char **sep);
char	*ft_strjoin(char const *s1, char const *s2);
void	print_error(void);
void	ft_putstr_fd(char *s, int fd);
void	sort_two(t_stack **stack_a);
void	sort_three(t_stack **stack_a);
int		ft_lstsize(t_stack *stack_a);
int		ft_find_min(t_stack *stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	print_list(t_stack *head);
int		ft_pos(t_stack *head, int x);
void	check_digit(char	**str);
int		ft_find_max(t_stack *stack);
int		*reference_tab(t_stack *stack);
void	send_big_to_top(t_stack **stack);
void	push_a_to_b(t_stack **stack_a, t_stack **stack_b, int *tab, int range);
void	send_big_to_top(t_stack **stack);
void	sort_hundred(t_stack **stack_a, t_stack **stack_b, int range);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_isdigit(int c);
#endif
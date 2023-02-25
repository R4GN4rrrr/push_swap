/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:14:23 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/25 01:30:28 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

t_stack	*get_stack_bottom(t_stack *stack);
t_stack	*get_stack_before_bottom(t_stack *stack);
t_stack	*ft_lstnew(int value);
t_stack	*ft_lstnew(int value);
void	print_error(void);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	check_digit(char	**str);
int		ft_strcmp(char *s1, char *s2);
void	fill_stack_a(t_stack **stack_a, char **sep);
int		ft_lstsize(t_stack *stack_a);
int		sorted(t_stack *stack);
char	*ft_strjwan(char *s1, char *s2);
int		ft_strrchr(char *s);
char	*get_next_line(int fd);
char	*ft_strdupp(char *s1);
size_t	ft_strlenn(char *s);
int		ft_isdigit(int c);
#endif
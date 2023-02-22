/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:44:57 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/22 04:52:24 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack *ft_lstnew(int value)
{
    t_stack *head;
    
    head = (t_stack *)malloc(sizeof(t_stack));
    if (!head)
        return (NULL);
    head->value = value;
    head->next = NULL;
    return (head);
}

int len(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return i;
}
void	check_digit(char	**str)
{
	int	i;
	int	j;
	int	p;
	int	m;

	i = 0;
	if (!str[0])
		print_error();
	while (str[i])
	{
		j = 0;
		p = 0;
		m = 0;
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
		if (len(str[i]) == 1 && (str[i][0] < '0' || str[i][0] > '9'))
			print_error();
		if (p > 1 || m > 1 )
			print_error();
		i++;
	}
}
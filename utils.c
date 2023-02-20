/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:45:06 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/18 03:23:35 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_lstsize(t_stack *stack_a)
{
    int i;

    i = 0;
    while (stack_a)
    {
        stack_a = stack_a->next;
        i++;
    }
    return (i);
}
int *in_array(t_stack *stack_a)
{
    int i;
    int *arr;

    i = 0;
    arr = malloc(4 * ft_lstsize(stack_a));
    while (stack_a)
    {
        arr[i] = stack_a->value;
        stack_a = stack_a->next;
        i++;
    }
    return (arr);
}

void    check_dup(t_stack *stack_a)
{
    int *arr;
    int size = ft_lstsize(stack_a);

    arr = in_array(stack_a);
    int i = 0;
    int j ;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (arr[i] == arr[j])
                print_error();
            j++;
        }
        i++;
    }
}
void    fill_stack_a(t_stack **stack_a, char **sep)
{
    int i = 0;

    while (sep[i])
    {
       ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(sep[i])));
       i++;
    }
    check_dup(*stack_a);
}

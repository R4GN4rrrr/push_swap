/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:46:47 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/17 22:50:15 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:51:11 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/17 23:10:10 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*courant;

	courant = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (courant -> next)
			courant = courant -> next;
		courant -> next = new;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:25:30 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/16 02:00:31 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
	*lst = new;
}

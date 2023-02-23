/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:38:14 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/23 04:42:13 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlenn(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdupp(char *s1)
{
	size_t	l;
	size_t	i;
	char	*p;

	i = 0;
	l = ft_strlenn(s1)+ 1;
	p = malloc(l);
	if (!p)
		return (0);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjwan(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	p = malloc (ft_strlenn(s1) + ft_strlenn(s2) + 1 * sizeof (char));
	if (!p)
		return (NULL);
	while (s1[i])
		p[k++] = s1[i++];
	while (s2[j])
		p[k++] = s2[j++];
	p[k] = '\0';
	free (s1);
	s1 = NULL;
	return (p);
}

int	ft_strrchr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlenn(s);
	while (i <= len)
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

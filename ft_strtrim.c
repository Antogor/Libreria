/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/21 11:53:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start(char const *s1, char const *set)
{
	int l;
	int x;
	int count_s;
	
	count_s = 0;
	l = 0;
	x = 0;
	while (set[l] != '\0')
	{
		while (s1[x])
		{
			if (s1[x] == set[l])
				count_s++;
			else
				break ;
			x++;
		}
		l++;
	}
	return (count_s);
}

int		end(char const *s1, char const *set)
{
	int l;
	int x;
	int count_e;
	
	count_e = 0;
	l = ft_strlen(s1);
	x = 0;
	while (l > 0)
	{
		while (s1[x])
		{
			if (s1[x] == set[l])
				count_e++;
			else
				break ;
			x++;
		}
		l--;
	}
	return (count_e);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		l;
	int		x;
	int		q;

	l = start(s1, set);
	x = end(s1, set);
	q = 0;
	new = malloc(sizeof(char) * l - x);
	if (new == 0)
		return (NULL);
	while (l < x)
		new[q++] = s1[l++];
	new[q] = '\0';
	return (new);
}

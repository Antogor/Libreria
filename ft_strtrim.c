/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/18 13:39:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		l;
	int		x;
	int		c;
	size_t	q;

	l = 0;
	x = 0;
	c = 0;
	q = ft_strlen(s1);
	new = malloc(sizeof(char) * q + 1);
	if (new == 0)
		return (NULL);
	while (*set)
	{
		x = 0;
		c = 0;
		while (s1[x])
		{
			if (s1[x] == *set)
				x++;
			else
				new[l + c++] = s1[x++];
		}
		set++;
		l++;
	}
	new[l] = '\0';
	return (new);
}

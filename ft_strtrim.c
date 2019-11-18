/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/18 15:46:25 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		l;
	int		x;
	size_t	q;

	l = 0;
	q = ft_strlen(s1);
	new = malloc(sizeof(char) * q + 1);
	if (new == 0)
		return (NULL);
	while (*set)
	{
		while (*s1)
		{
			x = 0;
			if (s1[x + 1] == *set)
				x++;
			else
				new[l++] = s1[x++];
			s1++;
		}
		set++;
	}
	new[l] = '\0';
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/19 10:20:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		l;
	size_t	x;
	size_t	q;

	l = 0;
	x = 0;
	q = ft_strlen(s1);
	new = malloc(sizeof(char) * q);
	if (new == 0)
		return (NULL);
	while (*set)
	{
		while (s1[x] == *set)
			x++;
		while (s1[q - 1] == *set)
			q--;
		set++;
	}
	while (x < q)
		new[l++] = s1[x++];
	new[l] = '\0';
	return (new);
}

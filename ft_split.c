/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/19 20:19:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count + 1);
}

char	**ft_bidimension(size_t fil, size_t colum)
{
	char	**new;
	size_t	l;

	new = (char**)malloc(colum + 1 * sizeof(char));
	l = 0;
	while (l < colum)
		new[l++] = (char*)malloc(sizeof (char) * fil);
	if (new == NULL)
		return (NULL);
	return(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	fil;
	size_t	colum;
	size_t	l;
	size_t	q;

	if (*s == 0 || c == 0)
		return (NULL);
	fil = ft_strlen(s);
	colum = ft_count(s, c);
	new = ft_bidimension(fil, colum);
	l = 0;
	q = 0;
	while (*s)
	{
		if (*s == c)
		{
			new[l][q] = '\0';
			q = 0;
			l++;
			s++;
		}
		new[l][q++] = *s++;
	}
	return (new);
}

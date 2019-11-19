/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/19 14:29:51 by agarzon-         ###   ########.fr       */
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
	char **new;
	int l;

	new = (char**)malloc(colum * fil + 1);
	l = 0;
	while (l < colum)
	{
		new[l] = (char*)malloc(sizeof (char) * fil);
		l++;
	}
	if (new == NULL)
		return (NULL);
	return(new);
}

char	**ft_split(char const *s, char c)
{
	char **new;
	size_t	fil;
	size_t	colum;

	if (!s || !c)
		return (NULL);
	colum = ft_strlen(s);
	fil = ft_count(s, c);
	new = ft_bidimension(fil, colum);
	if (!new)
		return (NULL);
	
	return (new);
}

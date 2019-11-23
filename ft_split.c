/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/23 12:51:02 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_count_fil(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

size_t	ft_count_colum(char const *s, char c, size_t fil)
{
	size_t l;
	size_t countco;
	
	while (l <= fil)
	{
		
	}
}

char	**ft_bidimension(char **arraybi, size_t fil, size_t colum)
{	
	size_t l;

	arraybi = (char**)malloc(fil * sizeof(char));
	l = 0;
	while (l < colum)
		arraybi[fil][l++] = (char*)malloc(sizeof(char) * colum);
	if (arraybi == NULL)
		return (NULL);
	return (arraybi);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	
	size_t	l;
	size_t	q;
	size_t	fil;
	size_t	colum;
	
	if (*s == 0 || c == 0)
		return (NULL);
	fil = ft_count_fil(s, c);
	*new = malloc(sizeof(char) * fil);
	colum = ft_count_colum(s, c, fil);
	if (!(ft_bidimension(new, fil, colum)))
		return (NULL);
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
}*/
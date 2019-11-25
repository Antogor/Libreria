/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/25 10:37:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_fil(char const *s, char c)
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

char	**ft_bidimension(size_t fil, size_t colum)
{
	size_t	l;
	char	**new;

	new = (char**)malloc(fil * sizeof(char*));
	l = 0;
	while (l < fil)
	{
		new[l] = (char*)malloc(sizeof(char) * colum);
		l++;
	}
	return (new);
}

void	ft_cpybi(char **new, char const *s, char c)
{
	int	l;
	int	q;

	l = 0;
	q = 0;
	while (*s)
	{
		if (*s != c)
			new[l][q++] = *s++;
		else
		{
			new[l][q] = '\0';
			l++;
			s++;
			q = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	fil;
	size_t	colum;

	if (*s == 0 || c == 0)
		return (NULL);
	fil = ft_count_fil(s, c);
	colum = ft_strlen(s);
	new = ft_bidimension(fil, colum);
	if (new == NULL)
		return (NULL);
	ft_cpybi(new, s, c);
	return (new);
}

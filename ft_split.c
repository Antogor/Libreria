/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/26 13:55:49 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_fil(char const *s, char c)
{
	size_t	count;
	int		l;

	count = 0;
	l = 0;
	while (s[l] == c)
		l++;
	if (s[l] != c)
		count = 1;
	while (s[l])
	{
		if (s[l] != c && s[l + 1] == c)
			count++;
		l++;
	}
	return (count);
}

static int	ft_count_colum(char const *s, char c)
{
	size_t count;
	int l;

	l = 0;
	count = 0;
	while (s[l] && s[l] != c)
	{
		count++;
		l++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	fil;
	size_t l;
	int q;

	if (*s == 0 || c == 0)
		return (NULL);
	fil = ft_count_fil(s, c);
	new = (char**)malloc(fil * sizeof(char*));
	if (new == NULL)
		return (NULL);
	l = 0;
	q = 0;
	while (l < fil)
	{
		while (s[q] && s[q] == c)
			q++;
		new[l] = ft_substr(s, q, ft_count_colum(s + q, c));
		while (s[q] && s[q] != c)
			q++;
		l++;
	}
	return (new);
}

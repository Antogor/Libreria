/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:14 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/29 10:31:47 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_fil(char const *s, char c)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

static int	ft_count_colum(char const *s, char c)
{
	int	count;
	int l;

	l = 0;
	count = 0;
	while (s[l] != '\0' && s[l] != c)
	{
		count++;
		l++;
	}
	return (count);
}

char		**ft_cpbi(char **new, char const *s, char c, int fil)
{
	int l;
	int q;

	l = 0;
	q = 0;
	while (l < fil)
	{
		while (s[q] != '\0' && s[q] == c)
			q++;
		new[l] = ft_substr(s, q, ft_count_colum(s + q, c));
		while (s[q] != '\0' && s[q] != c)
			q++;
		l++;
	}
	new[l] = NULL;
	return (new);
}

char		**ft_split(char const *s, char c)
{
	char	**new;
	int		fil;

	if (!s || !c)
		return (NULL);
	fil = ft_count_fil(s, c);
	new = (char**)malloc((fil + 1) * sizeof(char*));
	if (new == NULL)
		return (NULL);
	new = ft_cpbi(new, s, c, fil);
	return (new);
}

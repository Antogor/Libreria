/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 10:38:29 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/18 10:57:24 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	total;
	int		l;

	total = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	new = malloc(sizeof(char) * total);
	if (new == 0)
		return (NULL);
	if (s1 == 0 || s2 == 0)
		return (NULL);
	l = 0;
	while (total--)
	{
		if (*s1 != '\0')
			new[l++] = *s1++;
		if (*s1 == '\0')
		{
			while (*s2)
				new[l++] = *s2++;
			break ;
		}
	}
	new[l] = '\0';
	return (new);
}

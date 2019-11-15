/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:32:18 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/15 14:27:56 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack,
	const char *needle, size_t len)
{
	size_t	l;
	int		q,

	l = 0;
	q = 0;
	if (needle[l] == '\0')
		return ((char*)haystack);
	while (haystack[l] != '\0' && l < len)
	{
		if (haystack[l] == needle[q])
			q++;
		else
			q = 0;
		if (needle[q] == '\0')
			return ((char*)&haystack[l]);
		l++;
	}
	return (NULL);
}

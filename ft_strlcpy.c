/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/10 21:30:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t l;
	size_t x;
	size_t q;

	q = dstsize;
	x = ft_strlen (src);
	l = 0;
	while (src[l] != '\0' && l < q)
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (x);
	/*if (q < d)
	{
		while (l < q)
		{
			if (src[l] != '\0')
				dest[l] = src[l];
			else if (src[l] == '\0')
				dest[l] = '\0';
			l++;
		}
	}
	else
		return (0);
	if (l == q)
		dest[l] = '\0';
	if (q > x)
		return (0);
	return (d);*/
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/10 20:37:01 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int l;
	unsigned int x;
	unsigned int q;
	unsigned int d;

	l = 0;
	x = 0;
	d = 0;
	q = dstsize - 1;
	x = ft_strlen (dest);
	d = ft_strlen (src);
	if (q < d)
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
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 17:16:19 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t l;
	size_t x;
	size_t q;
	size_t z;

	q = dstsize;
	x = ft_strlen(src);
	z = ft_strlen(dst);
	l = 0;
	if (q > x || q > z)
		return (x);
	else if (q <= x && q <= z)
	{
		while (src[l] != '\0' && l < q)
		{
			dst[l] = src[l];
			l++;
		}
	
		dst[l] = '\0';
	}
	return (x);
}

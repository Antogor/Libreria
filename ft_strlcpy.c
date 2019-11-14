/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/14 11:04:11 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t l;
	size_t x;
	size_t q;

	q = dstsize + 1;
	x = ft_strlen(src);
	l = 0;
	if (q > x)
		return (x);
	else if (q <= x)
	{
		while (src[l] != '\0' && l < q)
		{
			dst[l] = src[l];
			l++;
		}
	
		dst[l - 1] = '\0';
	}
	return (x);
}

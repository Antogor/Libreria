/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/15 10:40:23 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t l;
	size_t x;
	size_t q;

	q = dstsize + 1;
	x = ft_strlen(src);
	l = 0;
	if (q <= x)
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

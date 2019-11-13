/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:56:17 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 16:28:16 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t l;
	size_t x;
	size_t q;

	q = dstsize;
	x = ft_strlen(src);
	l = 0;
	while (src[l] != '\0' && l < q)
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (x);
}

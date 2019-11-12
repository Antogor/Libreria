/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:31:21 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/12 13:15:52 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t	l;
	size_t	w;
	size_t	x;
	size_t	q;

	l = ft_strlen(src);
	w = ft_strlen(dst);
	x = dstsize;
	q = 0;
	while (src[q] != '\0' && q < x)
	{
		dst[x] = src[q];
		x++;
		q++;
	}
	dst[x] = '\0';
	return (l + w);
}

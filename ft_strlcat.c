/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:31:21 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/14 16:28:26 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t	dest;
	size_t	ori;
	size_t	l;

	ori = ft_strlen(src);
	dest = ft_strlen(dst);
	if (dstsize == 0)
		return (ori);
	if (dstsize < dest)
		ori = dest + dstsize;
	else
		ori += dest;
	l = 0;
	while (dest < dstsize - 1 && src[l] != '\0')
	{
		dst[dest] = src[l];
		dest++;
		l++;
	}
	dst[dest] = '\0';
	return (ori);
}
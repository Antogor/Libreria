/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:10:15 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 15:26:43 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned char	*l;
	unsigned char	*q;
	size_t			x;

	l = (unsigned char*)dst;
	q = (unsigned char*)src;
	x = 0;
	while (x < n)
	{
		l[x] = q[x];
		if (q[x] == (unsigned char)c)
			return ((void*)l + x + 1);
		x++;
	}
	return (NULL);
}

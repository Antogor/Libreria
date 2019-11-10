/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:10:15 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/09 19:23:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned char	*l;
	const char		*q;

	l = (unsigned char*)dst;
	q = (const char*)src;
	while (n--)
	{
		*l = *q;
		if (*q == c)
			return (dst);
		l++;
		q++;
	}
	return (0);
}

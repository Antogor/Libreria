/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:10:15 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 11:56:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned char	*l;
	unsigned char	*q;

	l = (unsigned char*)dst;
	q = (unsigned char*)src;
	while (n--)
	{
		*l = *q;
		if (*q == (unsigned char)c)
			return (dst);
		l++;
		q++;
	}
	return (0);
}

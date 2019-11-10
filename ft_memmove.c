/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:40:30 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/09 19:24:29 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*l;
	const unsigned char	*q;
	size_t				x;

	l = (unsigned char*)dst;
	q = (const unsigned char*)src;
	x = 0;
	if (q < l)
	{
		while (x++ <= len)
		{
			l[len - x] = q[len - x];
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*(l++) = *(q++);
		}
	}
	return (dst);
}

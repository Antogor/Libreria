/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:40:30 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 16:16:57 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*l;
	unsigned char	*q;

	l = (unsigned char*)dst;
	q = (unsigned char*)src;
	if ((void*)l == NULL && (void*)q == NULL)
		return (NULL);
	if (l < q)
	{
		while (len--)
		{
			*(l++) = *(q++);
		}
		return (dst);
	}
	else
	{
		while(len--)
			l[len] = q[len];
	}
	return (dst);
}

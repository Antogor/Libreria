/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:11:27 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/11 10:11:27 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	l;

	l = 0;
	if (to_find[l] == '\0')
		return((char*)src);
	while (src[l] != '\0' && l < len)
	{
		if (src[l] == to_find[0])
			return ((char*)&src[l]);
		l++;
	}
	return ((char*)src);
}
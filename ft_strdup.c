/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:50:03 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 10:42:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	x;

	x = ft_strlen(s1);
	dup = malloc(x + 1);
	ft_strlcpy((void*)dup, (void*)s1, x);
	return ((char*)dup);
}

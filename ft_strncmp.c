/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:06:56 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 12:43:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t l;

	if (n == 0)
		return (0);
	l = 0;
	while (s1[l] != '\0' && s2[l] != '\0' && s1[l] == s2[l] && l < n)
	{
		l++;
	}
	return ((unsigned char)s1[l] - (unsigned char)s2[l]);
}

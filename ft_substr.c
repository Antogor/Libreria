/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:50:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/15 10:41:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	l;
	size_t			q;

	substr = malloc(len + 1);
	l = start;
	q = 0;
	while (s[l] != '\0' && q < len)
	{
		substr[q] = s[l];
		l++;
		q++;
	}
	substr[q] = '\0';
	return (substr);
}

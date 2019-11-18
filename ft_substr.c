/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:50:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/18 10:52:56 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			q;

	substr = malloc(len + 1);
	if (s == 0)
		return (NULL);
	if (substr == 0)
		return (NULL);
	q = 0;
	while (s[start] != '\0' && q < len)
		substr[q++] = s[start++];
	substr[q] = '\0';
	return (substr);
}

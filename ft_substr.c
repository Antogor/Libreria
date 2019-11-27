/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:50:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/27 11:36:01 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			q;

	substr = (char*)malloc(len + 1);
	if (s == 0)
		return (NULL);
	if (substr == 0)
		return (NULL);
	q = 0;
	if (start > ft_strlen(s))
	{
		substr[q] = '\0';
		return (substr);
	}
	while (q < len)
		substr[q++] = s[start++];
	substr[q] = '\0';
	return (substr);
}

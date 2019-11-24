/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/24 17:28:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t        cstart(char const *s1, char const *set)
{
    size_t	count_s;
    size_t	len;
    size_t	q;
    int		l;
	int		x;

    count_s = 0;
	len = ft_strlen(set);
	q = 0;
	x = 0;
	while (q < len)
	{
		l = 0;
    	while (set[l] != '\0')
    	{
        	if (s1[x] == set[l])
        	{
            	count_s++;
            	x++;
        	}
        	else
            	l++;
    	}
		q++;
	}
    return (count_s);
}

size_t        cend(char const *s1, char const *set)
{
    size_t	count_e;
    size_t	len;
	size_t	len2;
	size_t	q;
	int		l;
    
    count_e = 0;
    len = ft_strlen(s1) - 1;
	len2 = ft_strlen(set);
	q = 0;
	while (q < len2)
	{
		l = 0;
    	while (set[l])
    	{
			if (s1[len] == set[l])
			{
        		count_e++;
        		len--;
			}
			else
				l++;
    	}
		q++;
	}
    return (count_e);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    size_t start;
    size_t end;
    int        l;
    size_t len;

    start = cstart(s1, set);
    end = cend(s1, set);
    len = ft_strlen(s1);
    l = 0;
    new = malloc(sizeof(char) * (len - (start + end)) + 1);
    if (new == 0)
        return (NULL);
    while (start <  len - end)
        new[l++] = s1[start++];
    new[l] = '\0';
    return (new);
}

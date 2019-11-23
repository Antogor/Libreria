/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:38:38 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/23 13:20:33 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t        cstart(char const *s1, char const *set)
{
    size_t count_s;

    count_s = 0;
	while (*set)
	{
    	while (*s1)
    	{
        	if (*s1 == *set)
        	{
            	count_s++;
            	s1++;
        	}
        	else
            	break ;
    	}
		set++;
	}
    return (count_s);
}

size_t        cend(char const *s1, char const *set)
{
    size_t count_e;
    size_t len;
    
    count_e = 0;
    len = ft_strlen(s1) - 1;
	while (*set)
	{
    	while (s1[len] == *set)
    	{
        	count_e++;
        	len--;
    	}
		set++;
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

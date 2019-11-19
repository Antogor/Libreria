/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:12:48 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/19 23:09:38 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int nb)
{
	int count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb >= 10)
	{
		nb = nb /10;
		count++;
	}
	return(count + 1);
}

char	*ft_itoa(int n)
{
	char *new;
	int l;

	l = ft_count(n);
	new = (char*)malloc(sizeof(char) * l + 1);
	new[l--] = '\0';
	if (n == 0)
	{
		new[0] = '0';
		return (new);
	}
	if (n < 0)
	{
		new[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		new[l--] = 48 + (n%10);
		n = n / 10;
	}
	return (new);
}

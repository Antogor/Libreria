/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:29:59 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/13 11:09:16 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cont;

	if (count == 0 || size == 0)
		return (NULL);
	cont = malloc(count * size);
	ft_bzero(cont, (count * size));
	return (cont);
}

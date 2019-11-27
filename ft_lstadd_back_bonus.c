/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 13:08:05 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/25 10:33:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *aux;

	aux = *alst;
	if (aux == NULL)
		*alst = new;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->next = NULL;
	}
}

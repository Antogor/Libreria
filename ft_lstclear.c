/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:54:52 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/26 16:47:37 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux;
	t_list *tmp;

	aux = *lst;
	while (aux)
	{
		tmp = aux;
		del(aux->content);
		aux = aux->next;
		free(tmp);
		//aux = tmp->next;
	}
	*lst = NULL;
}

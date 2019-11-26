/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:32:42 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/26 17:01:11 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *new;
	t_list *aux;

	if (!lst)
		return (NULL);
	aux = ft_lstnew(f(lst->content));
	new = aux;
	while (lst)
	{
		lst = lst->next;
		if (!(aux->next = ft_lstnew(f(lst->content))))
		{
			del(aux->next);
			free(aux->next);
			return (NULL);
		}
		aux = aux->next;
	}
	/*		new->next = lst->next;
		else
			new->next = NULL;
		del(lst->content);
		free(lst);
	}*/
	return (new);
}

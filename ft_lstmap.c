/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:32:42 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/25 16:27:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *new;

	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (lst->next != NULL)
			new->next = lst->next;
		else
			new->next = NULL;
		del(lst->content);
		free(lst);
	}
	return (new);
}

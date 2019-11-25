/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:32:42 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/25 10:34:18 by agarzon-         ###   ########.fr       */
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
			new = lst->next;
		else
			new->next = NULL;
		ft_lstdelone(lst, del);
	}
	return (new);
}

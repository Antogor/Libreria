/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:37:18 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/23 13:51:07 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *newlist;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (newlist);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->next = NULL;
		return (newlist);
	}
	newlist->content = malloc(ft_strlen((char*)content));
	ft_strlcpy(newlist->content, content, ft_strlen((char*)content) + 1);
	newlist->next = NULL;
	return (newlist);
}

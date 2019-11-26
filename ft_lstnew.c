/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:37:18 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/26 17:02:55 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *newlist;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->next = NULL;
		return (newlist);
	}
	newlist->content = malloc(sizeof(content)
						* sizeof(newlist->content));
	newlist->content = ft_strdup(content);
	newlist->next = NULL;
	return (newlist);
}

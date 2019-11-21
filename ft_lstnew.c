/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:37:18 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/21 13:30:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnew(void const *content)
{
	t_list *new_list;
	
	new_list = (t_list*)malloc(sizeof(t_list));
	if (new_list == 0)
	{
		new_list ->content = NULL;
		return (*new_list);
	}
	new_list ->content = (void*)content;
	new_list ->next = NULL;
	return (*new_list);
}

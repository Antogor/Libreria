/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:27:19 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/12 12:27:32 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int l;
	int numb;
	int negative;

	l = 0;
	numb = 0;
	negative = 1;
	if (nptr[l] == '-')
		negative = -1;
	if (nptr[l] == '-' || nptr[l] == '+')
		l++;
	while (nptr[l] != '\0' && nptr[l] >= '0' && nptr[l] <= '9')
	{
		numb = (numb * 10 + (nptr[l] - '0'));
		l++;
	}
	return (numb * negative);
}

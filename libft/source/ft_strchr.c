/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:50:00 by sroland           #+#    #+#             */
/*   Updated: 2019/11/16 18:02:35 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char		*res;

	res = (char *)s;
	if (!res)
		return (NULL);
	while (*res != '\0')
	{
		if (*res == (char)c)
			return (res);
		res++;
	}
	return (NULL);
}

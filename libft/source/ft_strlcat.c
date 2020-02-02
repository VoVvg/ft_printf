/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 02:49:55 by sroland           #+#    #+#             */
/*   Updated: 2019/09/19 20:31:17 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *restrict dst,
		const char *restrict src, size_t size)
{
	size_t		res;
	size_t		k;

	k = 0;
	while (*dst != '\0' && k < size)
	{
		dst++;
		k++;
	}
	res = k + ft_strlen(src);
	while (*src != '\0' && k + 1 < size)
	{
		*dst++ = *src++;
		k++;
	}
	if (k < size)
		*dst = '\0';
	return (res);
}

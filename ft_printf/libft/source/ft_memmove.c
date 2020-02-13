/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:04:38 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 16:25:28 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*res;

	res = dst;
	if (dst == NULL && src == NULL)
		return (dst);
	if (len == 0 && dst != NULL)
		return (res);
	if (dst < src)
		while (len-- > 0)
			*(char *)dst++ = *(char *)src++;
	else
	{
		src = src + len - 1;
		dst = dst + len - 1;
		while (len-- > 0)
			*(char *)dst-- = *(char *)src--;
	}
	return (res);
}

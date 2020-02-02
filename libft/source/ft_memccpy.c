/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:42:17 by sroland           #+#    #+#             */
/*   Updated: 2019/09/20 22:26:44 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	while (n > 0 && *(unsigned char *)src != (unsigned char)c)
	{
		*(char *)dst++ = *(char *)src++;
		n--;
	}
	if (n == 0)
		return (NULL);
	*(char *)dst++ = *(char *)src++;
	return (dst);
}

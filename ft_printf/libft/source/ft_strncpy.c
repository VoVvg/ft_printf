/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 01:04:09 by sroland           #+#    #+#             */
/*   Updated: 2019/11/03 16:10:38 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*dst0;

	dst0 = dst;
	while (len > 0 && *src != '\0')
	{
		len--;
		*dst++ = *src++;
	}
	while (len > 0)
	{
		len--;
		*dst++ = '\0';
	}
	return (dst0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:19:35 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 15:39:12 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t		pos;
	size_t		len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		pos = 0;
		while (needle[pos] != '\0' && haystack[pos] == needle[pos])
			pos++;
		if (pos == len)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

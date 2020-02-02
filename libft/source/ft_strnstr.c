/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:32:54 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 16:29:25 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack,
		const char *needle, size_t len)
{
	size_t		nl;
	size_t		pos;

	nl = ft_strlen(needle);
	if (nl == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= nl)
	{
		pos = 0;
		while (pos < nl && needle[pos] != '\0' &&
				haystack[pos] != '\0' && needle[pos] == haystack[pos])
			pos++;
		if (pos == nl)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

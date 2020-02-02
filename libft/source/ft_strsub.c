/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:03:15 by sroland           #+#    #+#             */
/*   Updated: 2019/11/20 20:03:03 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start + 1)
		return (NULL);
	res = (char *)malloc(sizeof(char) *
			((ft_strlen(s) - start > len ? len : len) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0 && s[start] != '\0')
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

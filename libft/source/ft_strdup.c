/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:32:40 by sroland           #+#    #+#             */
/*   Updated: 2019/11/20 16:26:57 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char		*res;
	char		*res0;

	if (s1 == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (res == NULL)
		return (res);
	res0 = res;
	while (*s1 != '\0')
		*res++ = *s1++;
	*res = '\0';
	return (res0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:00:03 by sroland           #+#    #+#             */
/*   Updated: 2019/09/19 21:18:44 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	while (*s != (char)c && len >= 0)
	{
		s--;
		len--;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:01:04 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 17:04:09 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char				*res;
	unsigned int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	else
	{
		res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (res == NULL)
			return (NULL);
		while (*s != '\0')
			res[i++] = (f == NULL ? *s++ : f(*s++));
		res[i] = '\0';
		return (res);
	}
}

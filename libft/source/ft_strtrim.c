/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:28:05 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 17:22:09 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		count1;
	size_t		count2;
	int			i;

	if (s == NULL)
		return (NULL);
	count1 = 0;
	count2 = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		count1++;
		i++;
	}
	i = ft_strlen(s) - 1;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		count2++;
		i--;
	}
	if (count1 + count2 >= ft_strlen(s))
		return (ft_strnew(0));
	else
		return (ft_strsub(s, count1, ft_strlen(s) - count1 - count2));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:05:49 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 17:37:30 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count1(char const *s, char c)
{
	int		count;

	count = 0;
	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			count++;
		}
	}
	return (count);
}

static int		ft_word_len1(char const *s, char c)
{
	int len;

	len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	int			i;
	int			n;

	if (s == NULL)
		return (NULL);
	n = ft_word_count1(s, c);
	res = (char **)malloc(sizeof(char *) * (ft_word_count1(s, c) + 1));
	i = -1;
	while (i < n && res != NULL)
	{
		while (*s == c)
			s++;
		res[++i] = (*s == '\0' ? '\0' :
				ft_strsub(s, 0, ft_word_len1(s, c)));
		if (res[i] == NULL && i < n)
		{
			while (--i >= 0)
				free(res[i]);
			free(res);
			return (NULL);
		}
		s = s + ft_word_len1(s, c);
	}
	return (res);
}

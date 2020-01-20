/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_strings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:44:57 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/20 14:57:41 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(const char *s)
{
	size_t i;

	while(s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (size + 1 == 0)
		return (NULL);
	if (!(ptr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ptr[size] = '\0';
	while (size--)
		ptr[size] = '\0';
	return (ptr);
}

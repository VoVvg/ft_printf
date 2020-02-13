/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:25:44 by sroland           #+#    #+#             */
/*   Updated: 2020/01/19 15:01:23 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	void		*result;

	result = b;
	while (len > 0)
	{
		*(char *)b = (unsigned char)c;
		b++;
		len--;
	}
	return (result);
}

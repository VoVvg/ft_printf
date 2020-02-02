/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:08:06 by sroland           #+#    #+#             */
/*   Updated: 2019/09/21 00:10:10 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		n1;
	int		count;
	char	*res;

	n1 = n;
	count = 1;
	while ((n1 = n1 / 10) != 0)
		count++;
	if (n < 0)
		n1 = 1;
	res = (char *)malloc(sizeof(char) * (count + n1 + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[count + n1] = '\0';
	while (count > 0)
	{
		res[count + n1 - 1] = '0' + (n % 10) * (n < 0 ? -1 : 1);
		n = n / 10;
		count--;
	}
	return (res);
}

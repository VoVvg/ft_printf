/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 15:04:47 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 13:55:24 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		n1;
	int		count;

	n1 = n;
	count = 1;
	while ((n1 = n1 / 10) != 0)
		count = count * 10;
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (count > 0)
	{
		ft_putchar_fd('0' + (n / count % 10) * (n < 0 ? -1 : 1), fd);
		count = count / 10;
	}
}

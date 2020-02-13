/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:05:22 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/26 17:28:23 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	char_print(char str, t_format *print)
{
	if (print->minus)
		char_print_minus(str, print);
	else
		char_print_plus(str, print);
}

void	char_print_minus(char str, t_format *print)
{
	write(1, &str, 1);
	print->width--;
	g_check++;
	while (print->width > 0)
	{
		write(1, " ", 1);
		print->width--;
		g_check++;
	}
}

void	char_print_plus(char str, t_format *print)
{
	while (print->width > 1)
	{
		if (print->zero)
			write(1, "0", 1);
		else
			write(1, " ", 1);
		print->width--;
		g_check++;
	}
	write(1, &str, 1);
	g_check++;
}

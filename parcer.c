/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:30:28 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/18 18:22:55 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	charcheck(char c)
{
	return (c != 'i' && c != 'd' && c != 's' && c != 'S'
	&& c != '%' && c != 'c' && c != 'p' && c != 'U' &&
	c != 'o' && c != 'u' && c != 'u' && c != 'x' && c != 'C'
	&& c != 'X' && c != 'f' && c != 'D' && c != 'O');
}

static int	parce_convs(t_format *print, int i, const char *format)
{
	if ((format[i - 1] == 'l' && format[i - 2] == 'l')
	|| format[i - 1] == 'L')
		print->length_mod = 'L';
	else if (format[i - 1] == 'l')
		print->length_mod = 'l';
	else if ((format[i - 1] == 'h' && format[i - 2] == 'h')
	|| format[i - 1] == 'H')
		print->length_mod = 'H';
	else if (format[i - 1] == 'h')
		print->length_mod = 'h';
	print->type = format[i];
	print->index = i;
	i -= (print->type == '%' ? 1 : 0);
	while (format[i] != '%' ? format[i] != '%' : 0)
		i--;
	i++;
	return (i);
}

static int	parce_flags(t_format *print, int i, const char *format)
{
	while (format[i] && !(format[i] > '0' && format[i] <= 9) &&
	format[i] != '.' && charcheck(format[i]))
	{
		if (format[i] == '-')
			print->minus = 'A';
		if (format[i] == '+')
			print->plus = 'A';
		if (format[i] == '0')
			print->zero = 'A';
		if (format[i] == '#')
			print->hash = 'A';
		if (format[i] == ' ')
			print->space = 'A';
		i++;
	}
	print->width = ((format[i] >= '0' && format[i] <= '9') ?
	ft_atoi(&format[i]) : 0);
	return (i);
}

int		parce(const char *format, t_format *print, int i)
{
	init_print(print);
	while (charcheck(format[i]))
	{
		if (format[i] == '.')
			print->dot = 'A';
		if (!format[i])
		{
			print->error = 'A';
			return (-1);
		}
		i++;
	}
	i = parce_convs(print, i, format);
	i = parce_flags(print, i, format);
	if (print->dot)
	{
		while (format[i] != '.')
			i++;
		print->precision = (ft_atoi(&format[i + 1]) == 0&& print->type == 'f'
		? -1 : ft_atoi(&format[i + 1]));
	}
	return (1);
}

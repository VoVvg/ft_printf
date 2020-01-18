/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:01:47 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/18 18:15:49 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			flag_mngr(va_list ap, t_format print)
{
	
}

void	read_string(char *format, va_list *ap)
{
	t_format	var_format;
	int			i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			parce(format, &var_format, i);
			if (var_format.error)
				break ;
			flag_mngr(ap, var_format);
			i = var_format.index + (format[i] ? 1 : 0);
		}
		if (format[i] && format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
			g_check++;
		}
	}
}

int		*ft_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	g_check = 0;
	if (!format)
		exit(-1);
	read_string(format, &ap);
	va_end(ap);
	return (g_check);
}

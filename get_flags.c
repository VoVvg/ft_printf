/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:49:46 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/20 15:13:54 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_flags(va_list ap,t_format print)
{
	if (print.type == 's')
		ft_putstr((va_arg(ap, char *)), print);
	//else if (print.type == 'c' && print.flag != 'l')
	//	put_char((char)va_arg(ap, int), print)
}

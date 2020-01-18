/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:32:38 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/18 17:31:18 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		init_print(t_format *print)
{
	print->length_mod = '\0';
	print->hash = '\0';
	print->index = 0;
	print->minus = '\0';
	print->plus = '\0';
	print->precision = 0;
	print->space = '\0';
	print->type = '\0';
	print->width = 0;
	print->zero = 0;
	print->dot = '\0';
	print->error = '\0';
	return (1);
}

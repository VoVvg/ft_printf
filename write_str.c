/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:12:15 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/20 15:14:38 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char *str, t_format print)
{
	int		len;
	
	if (!print.precision && print.dot)
		str = "";
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
}

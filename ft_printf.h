/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <sroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:01:34 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/18 17:55:16 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef		struct format_struct
{
			char		minus;
			char		plus;
			char		space;
			char		hash;
			char		zero;
			char		dot;
			char		error;
			int			index;
			int			width;
			int			precision;
			char		length_mod;
			char		type;
}			t_format;

int		g_check;

#endif

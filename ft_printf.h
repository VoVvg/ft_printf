/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:01:34 by bstacksp          #+#    #+#             */
/*   Updated: 2020/01/20 15:13:44 by bstacksp         ###   ########.fr       */
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
			char		flag;
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

int			flag_mngr(va_list ap, t_format print);
void	read_string(char *format, va_list *ap);
int		*ft_printf(const char *format, ...);
void	ft_putchar(char c);
int		ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		init_print(t_format *print);
static int	charcheck(char c);
static int	parce_convs(t_format *print, int i, const char *format);
static int	parce_flags(t_format *print, int i, const char *format);
int			parce(const char *format, t_format *print, int i);
char	*ft_strnew(size_t size);
int		ft_putstr(char *str, t_format print);

#endif

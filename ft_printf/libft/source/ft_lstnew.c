/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 21:49:11 by sroland           #+#    #+#             */
/*   Updated: 2019/11/03 19:24:38 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;
	void	*lst_content;

	res = (t_list *)malloc(sizeof(*res));
	if (res == NULL)
		return (NULL);
	res->next = NULL;
	if (content == NULL)
	{
		res->content = NULL;
		res->content_size = 0;
		return (res);
	}
	lst_content = (void *)malloc(content_size);
	if (lst_content == NULL)
	{
		free(res);
		return (NULL);
	}
	res->content = ft_memcpy(lst_content, content, content_size);
	res->content_size = content_size;
	return (res);
}

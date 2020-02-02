/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 23:01:06 by sroland           #+#    #+#             */
/*   Updated: 2019/09/22 14:13:46 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstadd_end1(t_list **alst, t_list *new)
{
	t_list		*res;

	res = *alst;
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	(*alst)->next = new;
	*alst = res;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;
	t_list		*new;

	res = f(lst);
	if (res == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		new = f(lst->next);
		if (new == NULL)
		{
			ft_lstdel(&res, ft_bzero);
			return (NULL);
		}
		ft_lstadd_end1(&res, new);
		lst = lst->next;
	}
	return (res);
}

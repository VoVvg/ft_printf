/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 22:30:53 by sroland           #+#    #+#             */
/*   Updated: 2019/09/21 22:49:58 by sroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*link;
	t_list		*next_link;

	link = *alst;
	next_link = (*alst)->next;
	while (next_link != NULL)
	{
		ft_lstdelone(&link, del);
		link = next_link;
		next_link = link->next;
	}
	ft_lstdelone(&link, del);
	*alst = NULL;
}

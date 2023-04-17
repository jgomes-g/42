/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:35:23 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:35:31 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	node = *lst;
	if (!*lst)
		return ;
	while (node)
	{
		node = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = node;
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:12:24 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 17:25:55 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		new_next = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = new_next;
	}
}

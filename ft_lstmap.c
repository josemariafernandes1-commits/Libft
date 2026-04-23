/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:34:19 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 18:26:14 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*header;
	t_list	*new_node;
	void	*temp_cont;

	if (!lst || !f || !del)
		return (NULL);
	header = NULL;
	while (lst)
	{
		temp_cont = f(lst -> content);
		new_node = ft_lstnew(temp_cont);
		if (!new_node)
		{
			del(temp_cont);
			ft_lstclear(&header, del);
			return (NULL);
		}
		ft_lstadd_back(&header, new_node);
		lst = lst->next;
	}
	return (header);
}

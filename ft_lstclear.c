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

// #include <stdio.h>

// void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new_node;
// 	t_list	*last;
// 	int		list_size;

// 	head = NULL;
// 	new_node = NULL;
// 	last = NULL;
// 	printf("New list\n");
// 	head = ft_lstnew(ft_strdup("First"));
// 	if (head)
// 		printf("First node: %s\n", (char *)head->content);
// 	new_node = ft_lstnew(ft_strdup("Second"));
// 	printf("Updated list:\n");
// 	ft_lstadd_front(&head, new_node);
// 	if (head)
// 		printf("%s\n", (char *)head->content);
// 	last = ft_lstnew(ft_strdup("Third"));
// 	ft_lstadd_back(&head, last);
// 	last = ft_lstlast(head);
// 	printf("The back node:\n%s\n", (char *)last->content);
// 	list_size = ft_lstsize(head);
// 	printf("Size of list:\n%d\n", list_size);
// 	ft_lstclear(&head, del_content);
// 	list_size = ft_lstsize(head);
// 	printf("Size of list:\n%d\n", list_size);
// 	return (0);
// }

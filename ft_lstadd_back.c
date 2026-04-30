/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:40:12 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 19:22:19 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new_node;
// 	t_list	*last;

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
// 	return (0);
// }

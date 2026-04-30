/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:40:27 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 19:16:05 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new_node;

// 	head = NULL;
// 	new_node = NULL;
// 	printf("New list\n");
// 	head = ft_lstnew(ft_strdup("First"));
// 	if (head)
// 		printf("First node: %s\n", (char *)head->content);
// 	new_node = ft_lstnew(ft_strdup("Second"));
// 	printf("Updated list:\n");
// 	ft_lstadd_front(&head, new_node);
// 	if (head)
// 		printf("%s\n", (char *)head->content);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:19:25 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/15 16:31:38 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	letter = 'a';

// 	printf("%c\n", (char)letter);
// 	letter = ft_toupper(letter);
// 	printf("%c\n", (char)letter);
// }

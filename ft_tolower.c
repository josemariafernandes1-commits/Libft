/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:30:38 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 16:20:43 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	letter = 'A';
// 	printf("%c\n", (char)letter);
// 	letter = ft_tolower(letter);
// 	printf("%c\n", (char)letter);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:09:13 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 15:41:15 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	string[7] = "String";
// 	size_t	size;

// 	size = ft_strlen(string);
// 	printf("%d\n", (int)size);
// }

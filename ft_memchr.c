/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:22:58 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 14:45:15 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cc;

	cc = (const unsigned char *) s;
	while (n--)
	{
		if (*cc == (unsigned char)c)
			return ((void *)(cc));
		cc++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string = "String";
// 	int		c = 'r';
// 	char	*found;

// 	found = ft_memchr(string, c, ft_strlen(string));
// 	printf("%s\n", found);
// 	found = ft_memchr(string, c, 3);
// 	printf("%s\n", found);
// 	found = ft_memchr(string, c, 2);
// 	printf("%s\n", found);
// 	return (0);
// }

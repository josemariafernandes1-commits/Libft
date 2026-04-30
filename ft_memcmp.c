/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:15:40 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 15:32:46 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		n--;
		ss1++;
		ss2++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string = "String";
// 	char	*string2 = "Strang";
// 	char	*string3 = "Str";
// 	int		c;

// 	c = ft_memcmp(string, string2, ft_strlen(string));
// 	printf("%d\n", c);
// 	c = ft_memcmp(string, string3, ft_strlen(string));
// 	printf("%d\n", c);
// 	c = ft_memcmp(string2, string3, ft_strlen(string));
// 	printf("%d\n", c);
// 	c = ft_memcmp(string2, string, ft_strlen(string));
// 	printf("%d\n", c);
// 	return (0);
// }

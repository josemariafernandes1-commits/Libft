/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:08:30 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 16:09:13 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			size_src;

	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	while (*src && size-- > 1)
		*dest++ = *src++;
	*dest = '\0';
	return (size_src);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	string[30] = "String ";
// 	char	string2[] = "overwrite";
// 	size_t	cpy_size;

// 	cpy_size = ft_strlcpy(string, string2, 0);
// 	printf("%d\n", (int)cpy_size);
// 	printf("%s\n", string);
// 	cpy_size = ft_strlcpy(string, string2, 5);
// 	printf("%d\n", (int)cpy_size);
// 	printf("%s\n", string);
// 	cpy_size = ft_strlcpy(string, string2, ft_strlen(string));
// 	printf("%d\n", (int)cpy_size);
// 	printf("%s\n", string);
// 	cpy_size = ft_strlcpy(string, string2, ft_strlen(string2) + 1);
// 	printf("%d\n", (int)cpy_size);
// 	printf("%s\n", string);
// }

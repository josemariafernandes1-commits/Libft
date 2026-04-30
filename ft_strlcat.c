/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:54:09 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 16:03:20 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			size_src;
	size_t			size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0)
		return (size_src);
	if (size <= size_dest)
		return (size + size_src);
	while (*dest != '\0')
		dest++;
	while (*src && (size - size_dest > 1))
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (size_dest + size_src);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	string[30] = "String ";
// 	char	string2[] = "connected";
// 	size_t	conc_size;

// 	conc_size = ft_strlcat(string, string2, 0);
// 	printf("%d\n", (int)conc_size);
// 	printf("%s\n", string);
// 	conc_size = ft_strlcat(string, string2, 5);
// 	printf("%d\n", (int)conc_size);
// 	printf("%s\n", string);
// 	conc_size = ft_strlcat(string, string2, ft_strlen(string));
// 	printf("%d\n", (int)conc_size);
// 	printf("%s\n", string);
// 	conc_size = ft_strlcat(string, string2, 
// 	ft_strlen(string) + ft_strlen(string2) + 1);
// 	printf("%d\n", (int)conc_size);
// 	printf("%s\n", string);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:55:45 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 15:22:32 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *) dest;
	src2 = (const unsigned char *) src;
	while (n-- > 0)
		*dest2++ = *src2++;
	return (dest);
}

// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
//     char	src[20] = "Basic memcpy";
//     char	dest[20];

// 	ft_memcpy(dest, src, 12);
// 	printf("Basic copy: %s\n", dest);
// 	char overlap[50] = "Basic memcpy";
// 	ft_memcpy(overlap + 2, overlap, 12);
// 	printf("Overlap forward: %s\n", overlap);
// 	char overlap2[50] = "Basic memcpy";
// 	ft_memcpy(overlap2, overlap2 + 1, 12);
// 	printf("Overlap backward: %s\n", overlap2);
// 	return (0);
// }

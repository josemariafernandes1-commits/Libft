/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:50 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 14:13:32 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *) dest;
	src2 = (const unsigned char *) src;
	if (dest > src)
	{
		while (n-- > 0)
			dest2[n] = src2[n];
	}
	else
	{
		while (n-- > 0)
			*dest2++ = *src2++;
	}
	return (dest);
}

// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
//     char	src[50] = "The difference between memcpy and memmove";
//     char	dest[50];

// 	ft_memmove(dest, src, 12);
// 	printf("Basic copy: %s\n", dest);
// 	char overlap[50] = "The difference between memcpy and memmove";
// 	ft_memmove(overlap + 2, overlap, 5);
// 	printf("Overlap forward: %s\n", overlap);
// 	char overlap2[50] = "The difference between memcpy and memmove";
// 	ft_memmove(overlap2, overlap2 + 1, 5);
// 	printf("Overlap backward: %s\n", overlap2);

// 	return (0);
// }

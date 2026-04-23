/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:55:45 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 18:58:05 by jduque-n         ###   ########.fr       */
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

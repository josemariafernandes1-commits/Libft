/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:50 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:46:43 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:22:58 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 18:14:49 by jduque-n         ###   ########.fr       */
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

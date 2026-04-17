/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:08:30 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 18:12:52 by jduque-n         ###   ########.fr       */
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

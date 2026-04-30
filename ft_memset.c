/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:59 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 15:32:26 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n-- > 0)
		*p++ = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// #include <unistd.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	*empty;
// 	int		c = 'a';
// 	size_t	size = 10;

// 	empty = ft_calloc(size, sizeof(char));
// 	if (!empty)
// 		return (1);
// 	empty[0] = 'a';
// 	empty[1] = 'b';
// 	printf("%s\n", empty);
// 	ft_memset(empty, c, size - 1);
// 	printf("%s\n", empty);
// 	free(empty);
// 	return (0);
// }

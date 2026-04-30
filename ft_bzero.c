/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:47:55 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 13:59:40 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n-- > 0)
		*p++ = '\0';
}

// #include <stdio.h>
// #include <unistd.h>
// #include "libft.h"

// int	main(void)
// {
//     char buf[12] = "hello!!!!";

//     printf("Before: %s\n", buf);
//     ft_bzero(buf, 5);
// 	write(1, buf + 5, ft_strlen(buf + 5));
//     return (0);
// }

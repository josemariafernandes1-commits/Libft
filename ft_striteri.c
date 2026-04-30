/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:53:34 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/22 22:00:20 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}

// void	to_lower(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c += ('a' - 'A');
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	string[] = "St Ri Ng";

// 	ft_striteri(string, to_lower);
// 	printf("%s", string);
// 	return (0);
// }

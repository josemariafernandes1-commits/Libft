/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:34:40 by jduque-n          #+#    #+#             */
/*   Updated: 2026/05/02 21:03:16 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	char			*ss2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	s2 = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	ss2 = s2;
	i = 0;
	while (*s)
		*s2++ = f(i++, *s++);
	*s2 = '\0';
	return (ss2);
}

// static char	to_lower(unsigned int i, char c)
// {
// 	if (i < 100 && (c >= 'A' && c <= 'Z'))
// 		return (c += 'a' - 'A');
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string = "St Ri Ng";
// 	char	*result;

// 	result = ft_strmapi(string, to_lower);
// 	printf("%s", result);
// }

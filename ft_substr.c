/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:59:57 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 16:18:42 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	sub = dest;
	s += start;
	while (*s && len-- > 0)
		*dest++ = *s++;
	*dest = '\0';
	return (sub);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "abcdefghijklmnopqrstuvwxyz";
// 	int		start = 4;
// 	char	*sub_string;

// 	sub_string = ft_substr("", start, ft_strlen(str1));
// 	printf("%s\n", sub_string);
// 	sub_string = ft_substr(str1, 32, ft_strlen(str1));
// 	printf("%s\n", sub_string);
// 	sub_string = ft_substr(str1, start, 30);
// 	printf("%s\n", sub_string);
// 	sub_string = ft_substr(str1, start = 7, ft_strlen(str1));
// 	printf("%s\n", sub_string);
// 	sub_string = ft_substr(str1, start = 0, ft_strlen(str1));
// 	printf("%s\n", sub_string);
// 	return (0);
// }

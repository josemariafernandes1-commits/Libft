/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:46:17 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/25 15:09:56 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;

	if (!*little)
		return ((char *)big);
	lit_len = ft_strlen(little);
	while (len >= lit_len && *big)
	{
		if (ft_strncmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1 = "ABDhh";
// 	const char	*s2 = NULL;
// 	size_t		len = 4;
// 	char		*result;

// 	result = ft_strnstr(s2, s1, len);
// 	printf("%s\n", result);
// }

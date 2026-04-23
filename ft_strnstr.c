/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:46:17 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 19:06:44 by jduque-n         ###   ########.fr       */
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

// int	main(void)
// {
// 	const char	*s1 = "ABDDDDCERGTYCDD";
// 	const char	*s2 = "CER";
// 	size_t		len = 13;
// 	char		*result;

// 	result = strnstr(s1, s2, len);
// 	printf("%s\n", result);
// }

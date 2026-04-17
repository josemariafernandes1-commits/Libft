/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:05:33 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 18:14:37 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				s_length;

	s_length = ft_strlen((char *)s);
	while (s_length >= 0)
	{
		if (s[s_length] == (char)c)
			return ((char *)(s + s_length));
		s_length--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int			c = 'C';
// 	const char	*s = "ABDDDDCERGTYCDD";
// 	char		*c1;

// 	c1 = strrchr(s, c);
// 	printf("%s\n", c1);
// }

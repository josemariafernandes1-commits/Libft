/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:25:32 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/22 16:28:39 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	const char	*ss1;

	if (!s1 || !set)
		return (NULL);
	ss1 = s1;
	start = 0;
	end = ft_strlen(s1);
	while (*ss1++ && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}


// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "ab";
// 	char	*str2 = "adwdeacabababfrwefafsrfababa";
// 	char	*trim_string;

// 	trim_string = ft_strtrim(str2, str1);
// 	printf("%s", trim_string);
// }

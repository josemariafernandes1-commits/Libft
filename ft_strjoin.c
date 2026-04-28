/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:53:09 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/20 13:53:09 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*temp_string;
	char		*joined_string;
	const char	*ss1;
	const char	*ss2;

	if (!s1 || !s2)
		return (NULL);
	ss1 = s1;
	ss2 = s2;
	temp_string = malloc((ft_strlen(ss1) + ft_strlen(ss2) + 1) * sizeof(char));
	joined_string = temp_string;
	if (!temp_string)
		return (NULL);
	while (*ss1)
		*temp_string++ = *ss1++;
	while (*ss2)
		*temp_string++ = *ss2++;
	*temp_string = '\0';
	return (joined_string);
}

/* #include <stdio.h>

int	main (void)
{
	char 	*str1 = "How to make ";
	char 	*str2 = "a full sentence";
	char 	*conc_string;

	conc_string = ft_strjoin(str1, str2);
	printf("%s", conc_string);
	free(conc_string);
}
 */
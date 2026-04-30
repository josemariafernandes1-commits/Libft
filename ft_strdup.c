/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:03:41 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 18:15:11 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, src, ft_strlen(src) + 1));
}

// int	main(void)
// {
// 	char	*string1 = "Esta string é muito grande";
// 	char	*string2;

// 	string2 = ft_strdup(string1);
// 	if (string2 == NULL)
// 		return (1);
// 	write(1, string2, ft_strlen(string2));
// 	free(string2);
// 	return (0);
// }

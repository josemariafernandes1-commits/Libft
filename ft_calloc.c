/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:44:14 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/30 14:24:54 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*backup;

	if (nmemb > 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	backup = malloc(nmemb * size);
	if (!backup)
		return (NULL);
	ft_bzero(backup, nmemb * size);
	return (backup);
}

// #include <stdio.h>
// #include <unistd.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	*empty;

// 	empty = ft_calloc(10, sizeof(char));
// 	if (!empty)
// 		return (1);
// 	write (1, empty, ft_strlen(empty));
// 	empty[0] = 'a';
// 	empty[1] = 'b';
// 	write (1, empty, ft_strlen(empty));
// 	free(empty);
// 	return (0);
// }

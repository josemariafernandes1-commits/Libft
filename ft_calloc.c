/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:44:14 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:51:04 by jduque-n         ###   ########.fr       */
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

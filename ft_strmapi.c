/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:34:40 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 15:59:59 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	char			*s_pointer;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	s2 = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	s_pointer = s2;
	i = 0;
	while (*s)
		*s2++ = f(i++, *s++);
	*s2 = '\0';
	return (s_pointer);
}

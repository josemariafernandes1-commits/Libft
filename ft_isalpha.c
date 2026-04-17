/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:40:57 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:45:55 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c = 'C';
// 	char	d = ' ';
// 	int		c1;
// 	int		d1;

// 	c1 = ft_isalpha(c);
// 	d1 = ft_isalpha(d);
// 	printf("%d\n", c1);
// 	printf("%d", d1);
// }

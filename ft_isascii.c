/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:00:02 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:46:07 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
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

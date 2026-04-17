/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:02:54 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:46:25 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c = '4';
// 	char	d = '\0';
// 	int		c1;
// 	int		d1;

// 	c1 = ft_isalpha(c);
// 	d1 = ft_isalpha(d);
// 	printf("%d\n", c1);
// 	printf("%d", d1);
// }

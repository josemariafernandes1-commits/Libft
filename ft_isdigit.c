/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:15:51 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:46:17 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c = '4';
// 	char	d = 'A';
// 	int		c1;
// 	int		d1;

// 	c1 = ft_isalpha(c);
// 	d1 = ft_isalpha(d);
// 	printf("%d\n", c1);
// 	printf("%d", d1);
// }

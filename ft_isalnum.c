/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:14:19 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:45:41 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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

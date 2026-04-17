/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:24:12 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/17 17:45:10 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num_signal;
	int	num;

	num_signal = 1;
	num = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			num_signal = -num_signal;
	while (*nptr >= '0' && *nptr <= '9')
		num = num * 10 + *nptr++ - '0';
	return (num * num_signal);
}

// #include <stdio.h>

// int	main(void)
// {
//     char	strint_test[] = "  \n---+--+12345b567";
//     int     string_return;

//     string_return = ft_atoi(strint_test);
//     printf("%d", string_return);
//     return (0);
// }

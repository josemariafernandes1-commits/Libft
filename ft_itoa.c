/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:36:11 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 16:05:34 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

long	ft_count_size(int n)
{
	long			counted_size;
	long			backup_n;

	backup_n = (long)n;
	counted_size = 0;
	if (n < 0)
	{
		backup_n *= -1;
		counted_size++;
	}
	if (n == 0)
		counted_size++;
	while (backup_n > 0)
	{
		counted_size++;
		backup_n = backup_n / 10;
	}
	return (counted_size);
}

char	*ft_alloc_size(int n)
{
	return (malloc(sizeof(char) * (ft_count_size(n) + 1)));
}

char	*ft_itoa(int n)
{
	char	*itoa_string;
	long	counted_size;
	long	backup_n;
	int		num_signal;

	counted_size = 0;
	itoa_string = ft_alloc_size(n);
	if (!itoa_string)
		return (NULL);
	counted_size = ft_count_size(n);
	itoa_string[counted_size--] = '\0';
	if (n == 0)
		itoa_string[0] = '0';
	if (n != 0 && n < 0)
		itoa_string[0] = '-';
	backup_n = (long)n;
	if (backup_n < 0)
		backup_n = -backup_n;
	num_signal = (n < 0);
	while (counted_size >= num_signal && n != 0)
	{
		itoa_string[counted_size--] = (backup_n % 10) + '0';
		backup_n /= 10;
	}
	return (itoa_string);
}

// #include <stdio.h>

// int main (void)
// {
// 	int		num_test = 1234;
// 	char	*string_return;

//     string_return = ft_itoa(num_test);
//     printf("%s", string_return);
//     free(string_return);
//     return (0);
// }

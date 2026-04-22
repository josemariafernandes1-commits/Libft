/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:36:11 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/22 16:41:11 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	char *itoa_string;
}

int ft_atoi(char *str)
{
	int num_signal;
	int i;
	long n;

	i = 0;
	num_signal = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			num_signal = -num_signal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * num_signal);
}

// #include <stdio.h>

// int main (void)
// {
//     char    strint_test[] = "  ---+--+1234ab567";
//     int        string_return;

//     string_return = ft_atoi(strint_test);
//     printf("%d", string_return);
//     return (0);
// }

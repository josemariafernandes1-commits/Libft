/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:11:12 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 16:02:48 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	numb;

	numb = n;
	if (numb < 0)
	{
		ft_putchar_fd('-', fd);
		numb = -numb;
	}
	if (numb >= 10)
		ft_putnbr_fd (numb / 10, fd);
	ft_putchar_fd((numb % 10) + '0', fd);
}

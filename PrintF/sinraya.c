/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sinraya.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:17:01 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/24 12:47:20 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	sinraya(unsigned int n, int fd)
{
	long			num;
	unsigned int	l;

	num = n;
	l = 0;
	if (n <= 9)
	{
		ft_putchar_fd((num + 48), fd);
		l++;
	}
	else
	{
		l = l + ft_putnbr_fd((num / 10), 1);
		ft_putnbr_fd((num % 10), 1);
		l++;
	}
	return (l);
}

// int	main(void)
// {
// 	int	p;

// 	p = sinraya((-10), 1);
// 	printf("\n%u\n", p);
// 	ft_printf("\n%u\n", p);
// 	ft_printf("%u\n", -10);
// }

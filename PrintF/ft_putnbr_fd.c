/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:47:09 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/24 14:17:27 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		l;

	l = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		l++;
		n = n * (-1);
	}
	if (n > 9)
	{
		l += ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
		ft_putchar_fd((n + 48), fd);
	l++;
	return (l);
}

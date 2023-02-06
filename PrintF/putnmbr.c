/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnmbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:48:05 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/24 12:50:12 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnmbr(int n)
{
	unsigned int	l;

	l = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (10);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		l++;
		n = n * (-1);
	}
	if (n <= 9)
		ft_putchar_fd((n + 48), 1);
	else
	{
		l = l + putnmbr(n / 10);
		l = l + putnmbr(n % 10);
	}
	l++;
	return (l);
}

int	uputnmbr(unsigned long n)
{
	unsigned int	l;

	l = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		l++;
		n = n * (-1);
	}
	if (n <= 9)
		ft_putchar_fd((n + 48), 1);
	else
	{
		l = l + putnmbr(n / 10);
		l = l + putnmbr(n % 10);
	}
	l++;
	return (l);
}

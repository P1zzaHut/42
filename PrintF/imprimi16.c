/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimi16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:15:38 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:40:49 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	imprimi16(unsigned long n, int fd)
{
	long long	num;
	char		*p;

	p = "0123456789abcdef";
	num = n;
	if (num >= 16)
	{
		imprimi16((num / 16), 1);
		imprimi16((num % 16), 1);
	}
	else
		ft_putchar_fd(p[num], fd);
}

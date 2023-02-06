/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimivoid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:36:05 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:43:49 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	imprimip(unsigned long long n, int fd)
{
	unsigned long long	num;
	char				*p;

	p = "0123456789abcdef";
	num = n;
	if (num >= 16)
	{
		imprimip((num / 16), 1);
		imprimip((num % 16), 1);
	}
	else
		ft_putchar_fd(p[num], fd);
}

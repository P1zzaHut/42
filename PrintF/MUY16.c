/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MUY16.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:14:50 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:42:46 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	muy16(unsigned long n, int fd)
{
	long	num;
	char	*p;

	p = "0123456789ABCDEF";
	num = n;
	if (num >= 16)
	{
		muy16((num / 16), 1);
		muy16((num % 16), 1);
	}
	else
		ft_putchar_fd(p[num], fd);
}

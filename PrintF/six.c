/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:55:11 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:17:40 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	six(va_list tipos)
{
	unsigned long	x;

	x = va_arg(tipos, unsigned int);
	imprimi16(x, 1);
	dieciseipati(x);
	return (dieciseipati(x));
}

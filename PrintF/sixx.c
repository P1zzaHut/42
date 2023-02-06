/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sixx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:57:43 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:41:17 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sixx(va_list tipos)
{
	unsigned long	p;

	p = va_arg(tipos, unsigned int);
	muy16(p, 1);
	dieciseipati(p);
	return (dieciseipati(p));
}

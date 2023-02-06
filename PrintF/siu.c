/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   siu.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:00:54 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/17 18:12:33 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	siu(va_list tipos)
{
	unsigned int	u;
	unsigned int	h;

	u = va_arg(tipos, unsigned int);
	h = sinraya(u, 1);
	return (h);
}

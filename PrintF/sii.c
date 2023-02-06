/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sii.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:35:42 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/23 20:51:59 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sii(va_list tipos)
{
	int	i;

	i = va_arg(tipos, int);
	putnmbr(i);
	numerodenumero(i);
	return (numerodenumero(i));
}

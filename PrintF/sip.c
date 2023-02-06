/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sip.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:57:31 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 18:06:17 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sip(va_list tipos)
{
	void	*y;
	int		c;

	y = va_arg(tipos, void *);
	ft_putstr_fd("0x", 1);
	imprimip((unsigned long long)y, 1);
	c = 2 + dieciseipati((unsigned long long)y);
	return (c);
}

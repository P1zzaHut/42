/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:27:56 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:34:57 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	chiquicode(va_list tipos, char x)
{
	unsigned int	l;

	if (x == 'i' || x == 'd')
		l = sii(tipos);
	if (x == 's')
		l = sis(tipos);
	if (x == 'c')
		l = sic(tipos);
	if (x == 'x')
		l = six(tipos);
	if (x == 'X')
		l = sixx(tipos);
	if (x == 'u')
		l = siu(tipos);
	if (x == '%')
		l = ft_putchar_fd('%', 1);
	if (x == 'p')
		l = sip(tipos);
	return (l);
}

int	ft_printf(const char *leyenda, ...)
{
	va_list			tipos;
	int				h;
	unsigned int	l;

	va_start(tipos, leyenda);
	h = 0;
	l = 0;
	while (leyenda[h] != '\0')
	{
		if (leyenda[h] == '%')
		{
			l = (l + chiquicode(tipos, leyenda[h + 1]));
			h++;
		}
		else
		{
			ft_putchar_fd(leyenda[h], 1);
			l++;
		}
		h++;
	}
	va_end (tipos);
	return (l);
}

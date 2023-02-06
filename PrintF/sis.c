/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:46:06 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/17 18:12:34 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sis(va_list	tipos)
{
	char	*s;

	s = va_arg(tipos, char *);
	if (s == (char *) NULL)
		s = "(null)";
	ft_putstr_fd(s, 1);
	if (ft_strlen(s) == 0)
		return (0);
	else
		return (ft_strlen(s));
}

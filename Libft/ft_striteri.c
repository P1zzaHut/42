/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:07:21 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/13 20:14:03 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	h;

	h = 0;
	if (!s)
		return ;
	while (s[h])
	{
		f(h, &s[h]);
		h++;
	}
}

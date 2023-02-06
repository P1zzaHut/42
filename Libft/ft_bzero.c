/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:46:06 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/05 18:12:38 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*p;
	size_t			h;

	h = 0;
	p = ((unsigned char *)dst);
	while (h < n)
	{
		p[h] = 0;
		h++;
	}
	dst = p;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:22:59 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/05 19:02:45 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				h;
	unsigned const char	*p;
	unsigned const char	*q;

	h = 0;
	p = ((unsigned const char *)s1);
	q = ((unsigned const char *)s2);
	if (p == q)
		return (0);
	while (h < n)
	{
		if (p[h] != q[h])
			return (p[h] - q[h]);
			h++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	p[] = "lisRdfb";
// 	char	q[] = "lisrdfb";

// 	printf("%d", memcmp(p, q, 5));
// 	printf("%d", ft_memcmp(p, q, 5));
// }

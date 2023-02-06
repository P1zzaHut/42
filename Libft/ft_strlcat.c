/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:21:41 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/18 17:39:26 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	h;
	size_t	f;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	h = 0;
	f = d;
	if (dstsize == 0)
		return (s);
	if (dstsize < d)
		return (dstsize + s);
	while (src[h] != '\0' && ((d + h) < dstsize))
	{
		dst[f] = src[h];
		f++;
		h++;
	}
	if ((d + h) == dstsize && d < dstsize)
		dst[f - 1] = '\0';
	else
		dst[f] = '\0';
	return (d + s);
}

// int	main(void)
// {
// 	char	p[] = "123";
// 	char	q[] = "456789";

// 	printf("%zu", ft_strlcat(p, q, 4));
// }

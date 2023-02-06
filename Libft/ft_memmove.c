/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:24:52 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/05 18:08:15 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*h;
	unsigned char	*f;

	h = ((unsigned char *)dest);
	f = ((unsigned char *)src);
	if (h == f)
		return (dest);
	if (f < h)
	{
		while (len--)
			*(h + len) = *(f + len);
		return (dest);
	}
	while (len--)
		*h++ = *f++;
	return (dest);
}

// int	main(void)
// {
// 	char	p[] = "sdfsd";
// 	char	q[] = "pereza";

// 	printf("%s", memmove(p, q, 4));
// 	printf("%s", ft_memmove(p, q, 4));
// 	// printf("%zu",ft_strlen(p));
// }

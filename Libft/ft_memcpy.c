/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:49:41 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 16:24:55 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srce;

	dest = dst;
	srce = src;
	if (dst == src || !n)
		return (dst);
	while (n-- > 0)
	{
		*dest++ = *srce++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	p[] = "habichuela";
// 	char	q[] = "macarrone";

// 	// printf("%s", memcpy(p, q, 3));
// 	printf("%s", ft_memcpy(p, q, 3));
// }
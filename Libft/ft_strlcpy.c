/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:08:43 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/21 18:38:19 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	long	f;

	if (ft_strlen(src) < dstsize)
		f = ft_strlen(src);
	else
		f = (dstsize - 1);
	if (dstsize != 0)
	{
		ft_memcpy(dst, src, f);
		dst[f] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	p[] = "000";

// 	printf("%zu", ft_strlcpy(p, "aaa", 3));
// 	printf("\n""%zu", strlcpy(p, "aaa", 3));
// }

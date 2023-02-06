/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:35:31 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/21 20:10:25 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				h;

	h = 0;
	str = (unsigned char *)s;
	while (h < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		h++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	p[] = "habichuela";

// 	printf("%s", memchr(((char *)p), 'c', 6));
// 	printf("%s", ft_memchr(((char *)p), 'c', 6));
// }	

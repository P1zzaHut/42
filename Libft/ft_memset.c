/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:31:47 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/05 18:11:47 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *dest, int s, size_t v)
{
	size_t			h;
	unsigned char	*p;

	h = 0;
	p = ((unsigned char *)dest);
	while (h < v)
	{
		p[h] = s;
		h++;
	}
	return (dest = p);
}

// int	main(void)
// {
// 	char	p[] = "jkkhvkv";
// 	int		q = 't';

// 	printf("%s", ft_memset(p, q, 3));
// 	// printf ("%s", memset(p, q, 3));
// }

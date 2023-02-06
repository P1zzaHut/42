/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:49:30 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/03 17:43:51 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	size_t	h;
	void	*dest;

	h = cont * size;
	dest = malloc(h);
	if (!dest)
		return (0);
	ft_memset(dest, 0, h);
	return (dest);
}

// int	main(void)
// {
// 	size_t	dest;

// 	dest = *((size_t *)ft_calloc(20, 10));
// 	printf("%zu", dest);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:48:57 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 16:20:12 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*clone;
	size_t	size;

	size = ft_strlen(s1) + 1;
	clone = malloc(size * sizeof(char));
	if (clone == 0)
		return (0);
	ft_memcpy(clone, s1, size);
	return (clone);
}

// int	main(void)
// {
// 	char	p[] = "akjs";

// 	printf("%s", ft_strdup(p));
// 	// printf("%s", strdup(p));
// }

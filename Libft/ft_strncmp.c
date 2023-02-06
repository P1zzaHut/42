/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:28:05 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/18 18:10:11 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	h;

	h = 0;
	if (n == 0)
		return (0);
	while (s1[h] != '\0' && h < n)
	{
		if (s1[h] == s2[h])
			h++;
		else
			return (((unsigned char *)s1)[h] - ((unsigned char *)s2)[h]);
	}
	if (h == n)
		return (((unsigned char *)s1)[h - 1] - ((unsigned char *)s2)[h - 1]);
	return (((unsigned char *)s1)[h] - ((unsigned char *)s2)[h]);
}

// int	main(void)
// {
// 	char	p[] = "test";
// 	char	q[] = "testss";

// 	printf("%d", strncmp(p, q, 7));
// 	printf("\n%d", ft_strncmp(p, q, 7));
// }

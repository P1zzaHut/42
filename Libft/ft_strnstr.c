/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:30:21 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 17:15:03 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	l;

	h = 0;
	l = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[h] && h <= (len - l))
	{
		if (l > len)
			return (0);
		else if (!ft_strncmp(&haystack[h], needle, l))
			return ((char *)&haystack[h]);
		h++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	p[] = "paleta palito palo palote";
// 	char	q[] = "palo";

// 	// printf("%s", strnstr(p, q, 50));
// 	printf("%s", ft_strnstr(p, q, 50));
// }

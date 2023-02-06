/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:35:17 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/21 19:32:17 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	l;
	size_t	h;

	h = 0;
	l = (ft_strlen(s) + 1);
	while (h < l)
	{
		if (s[h] == (unsigned char )c)
			return ((char *)&s[h]);
		h++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	p[] = "the cake is a lie !\0I'm hidden lol\r\n";

// 	printf("%s", strchr(p, ' '));
// 	printf("\n%s", ft_strchr(p, ' '));
// }

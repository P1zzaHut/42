/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:23:15 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 16:55:51 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			h;
	size_t			m;
	size_t			l;
	char			*s2;

	h = 0;
	l = ft_strlen(s);
	if (start > ft_strlen(s) || !s)
		return (ft_strdup(""));
	if ((l - start) > len)
		m = len + 1;
	else
		m = l - start + 1;
	if (start >= l)
		m = 1;
	s2 = malloc((m) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[start + h] && h < len && start < l)
	{
		s2[h] = s[start + h];
		h++;
	}
	s2[h] = 0;
	return (s2);
}

// int	main(void)
// {
// 	char	p[] = "puta madre";

// 	printf("%s", ft_substr(p, 5, 6));
// }

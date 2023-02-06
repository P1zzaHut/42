/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:35:00 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/12 13:02:03 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	p;
	size_t	p2;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!s3)
		return (NULL);
	p = 0;
	while ((char)(s1[p]) != '\0')
	{
		s3[p] = (char)(s1[p]);
		p++;
	}
	p2 = 0;
	while ((char)(s2[p2]) != '\0' )
	{
		s3[p + p2] = (char)(s2[p2]);
		p2++;
	}
	return (s3);
}

// int	main(void)
// {
// 	char	p[] = "mamma mia";
// 	char	q[] = "pizzeria";

// 	printf("%s", ft_strjoin(p, q));
// 	// printf("%zu", ft_strlen(p) + ft_strlen(q));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:57:45 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/21 19:16:58 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h> 
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	l = (ft_strlen(s) + 1);
	while (l)
	{
		if (s[l - 1] == (unsigned char )c)
			return ((char *)&s[l - 1]);
		l--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	p[] = "khsdhvf";

// 	printf("%s", strrchr(p, 'r'));
// 	printf("%s", ft_strrchr(p, 'r'));
// }

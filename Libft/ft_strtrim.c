/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:10:12 by lesanche          #+#    #+#             */
/*   Updated: 2022/05/09 18:21:35 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	h;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
	s1++;
	h = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[h]) && h != 0)
	h--;
	res = ft_substr((char *)s1, 0, h + 1);
	return (res);
}

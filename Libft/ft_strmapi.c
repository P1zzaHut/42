/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:09:24 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/06 17:08:04 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		h;	
	char				*goal;

	h = 0;
	if (!s || !f)
		return (NULL);
	goal = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!goal)
		return (NULL);
	while (s[h] != '\0')
	{
		goal[h] = f(h, s[h]);
		h++;
	}
	goal[h] = '\0';
	return (goal);
}

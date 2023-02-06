/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:35:28 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 16:18:24 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sizema(const char *str, char c)
{
	size_t	h;
	size_t	t;

	h = 0;
	t = 0;
	while (*str)
	{
		if (*str == c)
		t = 0;
		else if (*str != c && t == 0)
		{
			h++;
			t = 1;
		}
		str++;
	}
	return (h);
}

char	*ft_nullset(char *s, char c)
{
	size_t	h;
	size_t	f;

	h = 0;
	f = ft_strlen(s);
	while (h < f)
	{
		if (s[h] == c)
			s[h] = 0;
		h++;
	}
	return (s);
}

char	**ft_strdoopy(char **goal, char *clone, const char *s)
{
	size_t	h;
	int		p;
	size_t	f;

	h = 0;
	f = 0;
	p = -1;
	while (h < ft_strlen(s))
	{
		if (clone[h] != '\0' && p < 0)
		{
			goal[f] = ft_strdup(&clone[h]);
			if (!goal[f])
				return (NULL);
			f++;
			p = 0;
		}
		else if (clone[h] == '\0')
			p = -1;
	h++;
	}
		goal[f++] = NULL;
	return (goal);
}

char	**ft_split(char const *s, char c)
{
	char	**goal;
	char	*clone;

	if (!s)
		return (NULL);
	clone = ft_strdup(s);
	goal = (char **)malloc((sizema(s, c) + 1) * sizeof(char *));
	if (!goal || !s || !clone)
		return (NULL);
	clone = ft_nullset(clone, c);
	goal = ft_strdoopy(goal, clone, s);
	free(clone);
	return (goal);
}

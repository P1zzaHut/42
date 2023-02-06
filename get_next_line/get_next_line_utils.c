/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:38:34 by lesanche          #+#    #+#             */
/*   Updated: 2022/10/29 19:50:16 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	if (!s)
		return (0);
	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	if (!s)
		return (0);
	l = (ft_strlen(s) + 1);
	while (l)
	{
		if (s[l - 1] == (unsigned char)c)
			return ((char *)&s[l - 1]);
		l--;
	}
	return (0);
}

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
	while ((char)(s2[p2]) != '\0')
	{
		s3[p + p2] = (char)(s2[p2]);
		p2++;
	}
	s3[p + p2] = '\0';
	free((char *)s1);
	return (s3);
}

void	*ft_memset(void *dest, int s, size_t v)
{
	size_t			h;
	unsigned char	*p;

	h = 0;
	p = ((unsigned char *)dest);
	while (h < v)
	{
		p[h] = s;
		h++;
	}
	return (dest);
}

void	*ft_calloc(size_t cont, size_t size)
{
	size_t	h;
	void	*dest;

	h = cont * size;
	dest = malloc(h);
	if (!dest)
		return (0);
	ft_memset(dest, 0, cont);
	return (dest);
}

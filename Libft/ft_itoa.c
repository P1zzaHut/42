/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:35:28 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 16:29:07 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dignum(int n)
{
	int		p;
	int		s;
	int		h;

	p = 0;
	s = 0;
	if (n < 0)
	{
		s = 1;
		n = n * (-1);
	}
	while ((n / 10) > 0)
	{
		p++;
		n = n / 10;
	}
	h = p + s;
	return (h);
}

static int	getsign(int n)
{
	int	s;

	if (n < 0)
		s = 1;
	else
		s = 0;
	return (s);
}

char	*numtostr(int n, int p, char *goal, int s)
{
	while (p >= s)
	{
		if (n < 0)
		{
			n = n * (-1);
			goal[0] = '-';
		}
		goal[p--] = (n % 10) + '0';
		n = n / 10;
	}
	return (goal);
}

char	*ft_itoa(int n)
{
	int		h;
	int		p;
	int		f;
	int		s;
	char	*goal;

	h = 0;
	s = getsign(n);
	p = dignum(n);
	f = dignum(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	goal = (char *)malloc(sizeof(char) * (p + 2));
	if (!goal)
		return (NULL);
	numtostr(n, p, goal, s);
	goal[f + 1] = '\0';
	return (goal);
}

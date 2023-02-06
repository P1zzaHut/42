/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:53:21 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/01 19:10:57 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_vibecheck(char *str)
{
	if (*str == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		s;

	s = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r' )
		str++;
	if (*str == '-' || *str == '+')
		s = ft_vibecheck ((char *)str++);
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	res *= s;
	if (res != (int) res)
	{
		if (s > 0)
			return (-1);
		return (0);
	}
	return ((int) res);
}

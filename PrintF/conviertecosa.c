/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conviertecosa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:26:50 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/22 16:26:45 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dieciseipati(unsigned long long n)
{
	char	*jeje;
	int		h;
	int		r;
	int		s;

	h = 0;
	jeje = malloc(sizeof(char) * 100);
	while (n > 0)
	{
		r = n % 16;
		if (r < 10)
			jeje[h] = '0' + r;
		else
			jeje[h] = 'A' + (r -10);
		n = n / 16;
		h++;
	}
	jeje[h] = '\0';
	s = ft_strlen(jeje);
	free (jeje);
	if (s == 0)
		return (1);
	else
		return (s);
}

// int main(void)
// {
// 	printf("%d", dieciseipati(7000));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:29:01 by lesanche          #+#    #+#             */
/*   Updated: 2022/04/29 16:53:55 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	int	h;

	if (c >= 65 && c <= 90)
	{
		h = (c + 32);
		return (h);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	char p;

// 	p = 'Q';
// 	printf("%c", ft_tolower(p));
// }
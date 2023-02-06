/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:01:39 by lesanche          #+#    #+#             */
/*   Updated: 2022/04/29 16:53:58 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	int	h;

	if (c >= 97 && c <= 122)
	{
		h = (c - 32);
		return (h);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	char p;

// 	p = 'q';
// 	printf("%c", ft_toupper(p));
// }

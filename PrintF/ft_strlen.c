/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:10:16 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/28 13:06:23 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	if (s == NULL)
		return (0);
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

// int	main(void)
// {
// 	printf("%zu", ft_strlen((char *)(NULL)));
// }

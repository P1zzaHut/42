/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numerodenumero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:41:44 by lesanche          #+#    #+#             */
/*   Updated: 2022/07/28 12:53:05 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numerodenumero(int cordero)
{
	int	cont;

	cont = 1;
	if (cordero < 0)
		cont = cont + 1;
	while ((cordero / 10) != 0)
	{
		cordero = cordero / 10;
		cont++;
	}
	return (cont);
}

// int	main(void)
// {
// 	printf("%d", numerodenumero(4567));
// }

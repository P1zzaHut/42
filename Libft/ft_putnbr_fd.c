/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:48:10 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/20 18:01:45 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * (-1);
		if (num > 9)
		{
			ft_putnbr_fd((num / 10), fd);
			ft_putnbr_fd((num % 10), fd);
		}
		else
			ft_putchar_fd((num + 48), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putnbr_fd((num % 10), fd);
	}
	else
		ft_putchar_fd((num + 48), fd);
}

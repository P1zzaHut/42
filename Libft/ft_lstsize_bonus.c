/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:33:03 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/09 16:47:17 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		h;

	h = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		h++;
		lst = lst->next;
	}
	return (h);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:37:42 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/13 19:02:16 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpy;

	if (!lst || !*lst)
		return ;
	while (*lst != 0)
	{
		cpy = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cpy;
	}
	*lst = NULL;
}

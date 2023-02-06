/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:50:41 by lesanche          #+#    #+#             */
/*   Updated: 2022/06/13 18:34:59 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*goal;

	goal = malloc(sizeof(t_list));
	if (!goal)
		return (NULL);
	(goal)->content = content;
	(goal)->next = NULL;
	return (goal);
}

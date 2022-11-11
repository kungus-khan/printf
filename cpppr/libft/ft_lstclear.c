/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:30:54 by aikram            #+#    #+#             */
/*   Updated: 2022/01/28 10:08:29 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dingus;
	t_list	*chungus;

	dingus = *lst;
	chungus = *lst;
	if (!lst || !del)
		return ;
	while (chungus)
	{
		chungus = dingus->next;
		del(dingus->content);
		free (dingus);
		dingus = chungus;
	}
	*lst = 0;
}

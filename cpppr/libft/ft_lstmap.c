/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:46:34 by aikram            #+#    #+#             */
/*   Updated: 2022/01/28 09:59:03 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*fungus;
	t_list	*mungus;

	fungus = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		mungus = ft_lstnew(f(lst->content));
		if (!mungus)
		{
			ft_lstclear(&fungus, del);
			return (0);
		}
		ft_lstadd_back(&fungus, mungus);
		lst = lst->next;
	}
	return (fungus);
}

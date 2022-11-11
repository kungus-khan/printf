/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:01:48 by aikram            #+#    #+#             */
/*   Updated: 2022/01/25 11:59:11 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] != (char)c)
	{
		i--;
		while (s[i] != (char)c && i > 0)
			i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:36:02 by aikram            #+#    #+#             */
/*   Updated: 2022/01/25 12:18:33 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i[2];

	i[0] = 0;
	i[1] = -1;
	if (!s1 || !s2)
		return (0);
	s = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(*s));
	if (!s)
		return (0);
	while (s1[++i[1]])
		s[i[1]] = s1[i[1]];
	while (s2[i[0]])
		s[i[1]++] = s2[i[0]++];
	return (s);
}

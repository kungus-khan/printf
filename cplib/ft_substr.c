/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:40:53 by aikram            #+#    #+#             */
/*   Updated: 2022/01/25 11:58:08 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*steroids;
	unsigned int	i[2];

	i[0] = 0;
	i[1] = len;
	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		i[1] = ft_strlen(s);
	steroids = (char *)malloc(sizeof(*steroids) * (i[1] + 1));
	if (!steroids)
		return (0);
	if (start >= ft_strlen(s))
		while (i[0] < i[1])
			steroids[i[0]++] = '\0';
	while (i[0] < i[1])
		steroids[i[0]++] = s[start++];
	steroids[i[0]++] = '\0';
	return (steroids);
}

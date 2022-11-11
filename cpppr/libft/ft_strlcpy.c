/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:01:12 by aikram            #+#    #+#             */
/*   Updated: 2022/01/28 10:01:24 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	while (src[i[0]])
		i[0]++;
	if (dstsize > 0)
	{
		while (i[1] < dstsize - 1 && src[i[1]])
		{
			dst[i[1]] = src[i[1]];
			i[1]++;
		}
		dst[i[1]] = '\0';
	}
	return (i[0]);
}

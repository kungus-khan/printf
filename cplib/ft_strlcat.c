/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:52:07 by aikram            #+#    #+#             */
/*   Updated: 2022/01/24 18:46:46 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i[4];

	i[0] = ft_strlen(dst);
	i[1] = ft_strlen(src);
	i[2] = ft_strlen(dst) + ft_strlen(src);
	i[3] = 0;
	if (!dstsize)
		return (i[1]);
	if (i[0] > dstsize)
		return (dstsize + i[1]);
	while (src[i[3]] && i[0] < dstsize - 1)
		dst[i[0]++] = src[i[3]++];
	dst[i[0]] = '\0';
	return (i[2]);
}

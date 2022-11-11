/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:22:22 by aikram            #+#    #+#             */
/*   Updated: 2022/01/28 10:01:33 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i[2];

	i[0] = 0;
	if (!*needle)
		return (((char *)haystack));
	while (*haystack && i[0] < len)
	{
		i[1] = 0;
		while (haystack[i[1]] == needle[i[1]] && (i[0] + i[1]) < len)
		{
			if (!needle[i[1] + 1])
				return (((char *)haystack));
			i[1]++;
		}
		i[0]++;
		haystack++;
	}
	return (0);
}

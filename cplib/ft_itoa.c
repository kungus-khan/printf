/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:41:43 by aikram            #+#    #+#             */
/*   Updated: 2022/01/25 13:38:21 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	zong_xina(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		i[2];
	long	l;

	i[0] = 0;
	i[1] = zong_xina(n);
	string = ft_calloc((i[1] + 1), sizeof(char));
	if (!string)
		return (0);
	l = n;
	if (l < 0)
	{
		string[i[0]] = '-';
		l *= -1;
		i[0]++;
	}
	while (--i[1] >= i[0])
	{
		string[i[1]] = (l % 10) + 48;
		l /= 10;
	}
	return (string);
}

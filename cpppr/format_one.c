/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:13:50 by aikram            #+#    #+#             */
/*   Updated: 2022/04/09 23:31:03 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character(int c)
{
	write(1, &c, 1);
	return (1);
}

int	string(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	pointer(unsigned long long ptr)
{
	char	*a;
	int		i;

	a = "0123456789abcdef";
	i = 1;
	if (ptr > 15)
	{
		i += pointer(ptr / 16);
		pointer(ptr % 16);
	}
	else
		ft_putchar_fd(a[ptr], 1);
	return (i);
}

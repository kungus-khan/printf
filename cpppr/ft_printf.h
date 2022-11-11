/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:18:29 by aikram            #+#    #+#             */
/*   Updated: 2022/04/13 13:19:52 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *st, ...);
int		formats(const char *st, va_list args);
int		putchr(char c);
int		character(int c);
int		string(char *str);
int		pointer(unsigned long long ptr);
int		uns_hex_caphex(char c, unsigned int num);
int		hex_caphex(char cap_or_not, unsigned int num);
int		uns(unsigned int num);
int		digit(int num);

#endif
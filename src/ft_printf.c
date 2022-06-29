/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:05:50 by msindreu          #+#    #+#             */
/*   Updated: 2022/06/29 18:21:29 by msindreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_check(va_list argument, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(argument, int)));
	if (type == '%')
		return (ft_putchar('%'));
	//if (type == s)
	//	return (ft_putstr(va_arg(argument, char *);
	//if (type == d)
//	return (ft_putnbr(va_arg(argument, int);
	return(0);
}

int ft_printf(const char *str, ...)
{
	int	len;
	va_list argument;

	len = 0;
	va_start(argument, str);

	while (str[len] != '\0')
	{
		if (str[len] == '%')
		{
			len = len + ft_check(argument, str[len + 1]);
		}
		else
		{
			ft_putchar(str[len]);
		}
		len++;
	}
	va_end(argument);
	return (len - 2);
}

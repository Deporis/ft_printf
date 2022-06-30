/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:05:50 by msindreu          #+#    #+#             */
/*   Updated: 2022/06/30 17:28:54 by msindreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_check(va_list argument, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(argument, int)));
	if (type == '%')
		return (ft_putchar('%'));
	if (type == 's')
		return (ft_putstr(va_arg(argument, char *)));
	if (type == 'p')
		return (ft_putpointer(va_arg(argument, char *)));
	//if (type == d)
//	return (ft_putnbr(va_arg(argument, int);
	return(0);
}

int ft_printf(const char *str, ...)
{
	int	len;
	int	i;
	va_list argument;

	len = 0;
	i = 0;
	va_start(argument, str);

	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len = i + ft_check(argument, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(argument);
	return (len);
}

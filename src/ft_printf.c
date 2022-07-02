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
			len = len + ft_check(argument, str[i + 1]);
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

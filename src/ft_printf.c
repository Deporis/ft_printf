/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:56:33 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:56:37 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

static int	ft_condition(const char *str, int *i, va_list argument, int len)
{
	int	n;

	n = 0;
	if (str[*i] == '%')
	{
		n = ft_check(argument, str[*i + 1]);
		if (n == -1)
			return (-1);
		len = len + n;
		*i = *i + 1;
	}
	else
	{
		if (ft_putchar(str[*i]) == -1)
			return (-1);
		else
			len++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	argument;

	len = 0;
	i = 0;
	va_start(argument, str);
	while (str[i] != '\0')
	{
		len = ft_condition(str, &i, argument, len);
		if (len == -1)
			return (-1);
		i++;
	}
	va_end(argument);
	return (len);
}

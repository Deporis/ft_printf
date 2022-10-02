/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:57:50 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:57:51 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	n;

	i = 0;
	if (!str)
	{
		n = write(1, "(null)", 6);
		if (n == -1)
			return (-1);
		else
			return (6);
	}
	else
	{
		while (str[i] != '\0')
		{
			n = write (1, (str + i), 1);
			if (n == -1)
				return (-1);
			i++;
		}
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:58:19 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:58:20 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_putupper(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		return (ft_protect(n, 16, ft_putupper));
	else
	{
		if (n < 10)
		{
			if (ft_putchar(n + 48) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(n + 55) == -1)
				return (-1);
		}
		len++;
	}
	return (len);
}

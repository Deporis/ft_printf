/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:57:27 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:57:28 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_putnbr(unsigned int n)
{
	int	i;
	int	len;

	i = n;
	len = 0;
	if (i < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		i = -i;
		n = -n;
		len++;
	}
	if (n < 10)
	{
		if (ft_putchar(48 + i) == -1)
			return (-1);
		len++;
	}
	else
		return (len + ft_protect(n, 10, ft_putnbr));
	return (len);
}

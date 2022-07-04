/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:18 by msindreu          #+#    #+#             */
/*   Updated: 2022/06/30 17:28:55 by msindreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"
int	ft_putpointer(unsigned long ptr)
{
	int len;

	len = 0;
	if (ptr >= 16)
	{
		return (ft_putpointer(ptr / 16) + ft_putpointer(ptr % 16));
	}
	else
	{
		if (ptr < 10)
			ft_putchar(ptr + 48);
		else
			ft_putchar(ptr + 87);
		len++;
	}
	return (len);
}

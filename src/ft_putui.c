/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:58:05 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:58:07 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_putui(unsigned int u)
{
	int	len;

	len = 0;
	if (u < 10)
	{
		if (ft_putchar(48 + u) == -1)
			return (-1);
		len++;
	}
	else
	{
		return (ft_protect(u, 10, ft_putui));
	}
	return (len);
}

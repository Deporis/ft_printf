/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:56:46 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:56:47 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_protect(unsigned int n, int x, int (*f) (unsigned int))
{	
	int	div;
	int	mod;

	div = f(n / x);
	if (div == -1)
		return (-1);
	mod = f(n % x);
	if (mod == -1)
		return (-1);
	return (div + mod);
}

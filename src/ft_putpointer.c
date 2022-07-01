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
void	ft_putpointer(unsigned long ptr)
{
	int n;
	/* 
	 * We get a string, which has an address, that address is in hexadecimal
	 * just with a cast we transofrm hexa to decimal look below: (unsigned long)
	 * */
	//printf("Address value as int: %lu\n", (unsigned long) ptr);
	/*
	 * We need to divide by 16 to get the rest and the last one the quocient
	 * just like a putnbr.
	 * */
	if (ptr >= 16)
	{
		ft_putpointer(ptr / 16);
		ft_putpointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			n = ft_putchar(ptr + 48);
		else
			n = ft_putchar(ptr + 87);		
	}
}

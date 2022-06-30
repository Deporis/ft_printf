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
int	ft_putpointer(char *ptr)
{
	int i;
	
	i = 0;
	printf("Address: %p\n", ptr);

	/* 
	 * We get a string, which has an address, that address is in hedaxdecimal
	 * just with a cast we transofrm hexa to decimal look below: (unsigned long)
	 * */
	printf("Address value as int: %lu\n", (unsigned long) ptr);
	/*
	 * We need to divide by 16 to get the rest and the last one the quocient
	 * just like a putnbr.
	 * */
	while(ptr[i])
	{
		write(1, &(ptr[i]), 1);
		i++;
	}
	return (10);
}

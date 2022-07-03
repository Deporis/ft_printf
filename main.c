/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:54:33 by msindreu          #+#    #+#             */
/*   Updated: 2022/07/01 17:52:16 by msindreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ft_printf.h"
int main (void)
{
	/* Test for %c and %% */
	/*
	int c;
	c = 'F';
	printf("valor original: %d\n", printf("hola ferran %c %%\n", c));
	printf("valor ft: %d\n", ft_printf("hola ferran %c %%\n", c));
	*/
	
	/* Test for %s */
	/*
	char *str1 = "eevee";
	printf("Valor original %d\n", printf("Hola %s bon dia\n", str1));
	printf("Valor ft %d\n", ft_printf("Hola %s bon dia\n", str1));
	*/

	/* Test for %p */
	/*
	char *str2 = "eevee";
	printf("valor original: %d\n", printf("%s %p\n", str2, str2));
	printf("valor ft: %d\n", ft_printf("%s %p\n", str2, str2)); 
	*/

	/* Test for %d and %i */
	/*
	int b = 7598642;
	printf("valor original: %d\n", printf("Mar %d\n", b));	
	printf("valor ft: %d\n", ft_printf("Mar %d\n", b)); 
	*/
	
	/* Test for %u */
	
	/*
	When printing a %u, if the value is negative, it rests the max value of an unsigned int
	and the negative value + 1:
	max value of unsigned int: 4294967295
	value n = -1
	result with %u is 42949627295 - 1 + 1 = 42949627294
	*/
	
	int n1 = 179384;
	unsigned int n2 = 179384;
	printf("valor original: %d\n", printf("%u %u\n", n1, n2));
	printf("valor ft: %d\n", ft_printf("%u %u\n", n1, n2));
	
	return (0);
}

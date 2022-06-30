/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:54:33 by msindreu          #+#    #+#             */
/*   Updated: 2022/06/30 17:28:51 by msindreu         ###   ########.fr       */
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
	char *str2 = "eevee";
	//printf("valor original: %d\n", printf("%s %p\n", str2, str2));
	printf("valor ft: %d\n", ft_printf("%s %p\n", str2, str2)); 
	return (0);
}

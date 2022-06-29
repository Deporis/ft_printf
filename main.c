/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msindreu <msindreu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:54:33 by msindreu          #+#    #+#             */
/*   Updated: 2022/06/29 18:21:31 by msindreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ft_printf.h"
int main ()
{
	int c;

	c = 'F';
	printf("valor original: %d\n", printf("hola ferran % %%\n", c));
	printf("valor ft: %d\n", ft_printf("hola ferran %c %%\n", c));


}

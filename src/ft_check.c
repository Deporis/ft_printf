#include "../lib/ft_printf.h"

int	ft_check(va_list argument, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(argument, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(argument, char *)));
	else if (type == 'p')
	{
		write(1, "0x", 2);
		ft_putpointer(va_arg(argument, unsigned long));
		return (11);
	}
	//TODO
	//else if (type == 'd' || type == 'i')
		//return (ft_putnbr(va_arg(argument, int);
	//TODO
	//else if (type 'u')
		// return unsigned decimal in base 10
	//TODO
	//else if (type == 'x')
		// return number in hexadecimal in lowecase
	//TODO
	//else if (type == 'X')
		// return number in hex in uppercase .toUpperCase
	else if (type == '%')
		return (ft_putchar('%'));
	return(0);
}

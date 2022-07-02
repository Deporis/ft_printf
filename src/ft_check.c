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
	else if (type == 'd' || type == 'i')
	{
		int tmp = va_arg(argument, int);
		//ft_putnbr(va_arg(argument, int));
		ft_putnbr(tmp);
		return ((int)ft_strlen(ft_itoa(tmp)));
	}	
	else if (type == 'u')
	// I would replicate putnbr but with unsigned ints, so it can be represented
	// and also the transformation its done when casting, so we don't need to 
	// worry with the difference with max value of the unsigned number
	{
		unsigned int tmp = va_arg(argument, unsigned int);
		ft_putnbr(tmp); //no podra representar el max numero de unsigned number
		return ((int)ft_strlen(ft_itoa(tmp)));
		//return ft_unsigned_putnbr(va_arg(argument, unsigned int));
	}
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

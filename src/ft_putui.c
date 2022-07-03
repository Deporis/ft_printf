#include "../lib/ft_printf.h"

int ft_putui(unsigned int u)
{
	int len;

	len = 0;
	if (u < 10)
	{
		ft_putchar(48 + u);
		len++;
	}
	else
		return (ft_putnbr(u / 10) + ft_putnbr(u % 10));
	return (len);
}

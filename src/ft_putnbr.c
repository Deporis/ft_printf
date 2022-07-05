#include "../lib/ft_printf.h"

int ft_putnbr(int n)
{
	unsigned int i;
	int len;

	i = n;
	len = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		i = -i;
		n = -n;
		len++;
	}
	if (i < 10)
	{
		if (ft_putchar(48 + n) == -1)
			return (-1);
		len++;
	}
	else
		return (len + ft_putnbr(i / 10) + ft_putnbr(i % 10));
	return (len);
}

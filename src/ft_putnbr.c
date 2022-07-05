#include "../lib/ft_printf.h"

int ft_putnbr(int n)
{
	unsigned int i;
	int len;

	i = n;
	len = 0;
	if (n < 0)
	{
		ft_putchar('-');
		i = -i;
		n = -n;
		len++;
	}
	if (i < 10)
	{
		ft_putchar(48 + n);
		len++;
	}
	else
		return (len + ft_putnbr(i / 10) + ft_putnbr(i % 10));
	return (len);
}

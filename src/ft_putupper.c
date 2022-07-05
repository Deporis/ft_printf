#include "../lib/ft_printf.h"
int	ft_putupper(unsigned int n)
{
	int len;
	len = 0;
	if (n >= 16)
	{
		return (ft_putupper(n / 16) + ft_putupper(n % 16));
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else
			ft_putchar(n + 55);
		len++;
	}
	return (len);
}

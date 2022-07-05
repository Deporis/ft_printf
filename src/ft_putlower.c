#include "../lib/ft_printf.h"
int	ft_putlower(unsigned int n)
{
	int len;

	len = 0;
	if (n >= 16)
	{
		return (ft_putlower(n / 16) + ft_putlower(n % 16));
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else
			ft_putchar(n + 87);
		len++;
	}
	return (len);
}

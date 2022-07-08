#include "../lib/ft_printf.h"
int	ft_putlower(unsigned int n)
{
	int len;
	int div;
	int mod;

	len = 0;
	div = 0;
	mod = 0;
	if (n >= 16)
	{
		div = ft_putlower(n / 16);
		if (div == -1)
			return (-1);
		mod = ft_putlower(n % 16);
		if (mod == -1)
			return (-1);
		return (div + mod);
	}
	else
	{
		if (n < 10)
		{
			if (ft_putchar(n + 48) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(n + 87) == -1)
				return (-1);
		}
		len++;
	}
	return (len);
}

#include "../lib/ft_printf.h"

int	ft_protect(unsigned int n, int x, int (*f) (unsigned int))
{	
	int	div;
	int	mod;
	
	div = f(n / x);
	if (div == -1)
		return (-1);
	mod = f(n % x);
	if (mod == -1)
		return (-1);
	return (div + mod);
}

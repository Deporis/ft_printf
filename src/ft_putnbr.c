#include "../lib/ft_printf.h"

/*
To do the function putnbr I considered two possibilities:
1st -- Replicate the ft_putnbr from libft and use sum recursion for the length, but it has
	problems with the negative, as if I do a return 1, it finishes de program there.
No CHANGES in files  as I still have the problem

2nd -- Use the function as a void, print the number and then apply itoa to the number, and 
	use a strlen of the number string, which will count the negative.
CHANGES in files and directories as I need itoa and strlen.
*/

/*
int ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		if (n < 10)
		{
			return (ft_putchar(48 + n));
		}
		else
		{
			return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
		}
	}
}
*/
void ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		if (n < 10)
		{
			ft_putchar(48 + n);
		}
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}

#include "../lib/ft_printf.h"
int	ft_putpointer(char *ptr)
{
	//char *ptr10;
	//*ptr10 = ptr; //en base 10	
	//printf("putpointer function %p == string %s\n", ptr, ptr10);
	char n;
	
	n = 48;
	if (ptr)
	{
		write(1, &n, 1);
	}
	return (10);
}

#include "../lib/ft_printf.h"
int	ft_putpointer(char *ptr)
{
	int i = 0;
	while (ptr[i])
	{
		printf("%c\n", (char)(&ptr)[i] - 20);
		i++;
	}
	/*
	//char *ptr10;
	// *ptr10 = ptr; //en base 10	
	//printf("putpointer function %p == string %s\n", ptr, ptr10);
	size_t address = (size_t) ptr; // index + 2 [0, x, 1]
	printf("adress of ptr? %zu\n", address);
	int i = 0;
	//char c;
	write(1, "Is it equal to original? ", 26);
	char c = address;
	write(1, &c, 1);
	write(1, "\n", 1);
	
	while (address[i])
	{
		c = 65; // *(address + i);
		write(1, &c, 1);
		i++;	
	}
	*/
	return (10);
}

#include <stdio.h>

int	isascii(int arg)
{
	return (arg > 31 && arg < 127);
}

/*int	main(void)
{
	printf("%d\n", isascii(' '));
}*/
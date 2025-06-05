#include <unistd.h>

int calculator(char *input)
{
	write(1, "you typed: ", 11);
	write(1, input, 1024); // just echo for now
	write(1, "\n", 1);
	
	return 0;
}

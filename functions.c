#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _print_int - print integer
* @value: the integer to print
*/
void _print_int(int value)
{
	char digit;

	if (value < 0) 
{
	write(1, "-", 1);
	value = -value;
}

	if (value >= 10) 
{
	_print_int(value / 10);
}
	digit = value % 10 + '0';
	write(1, &digit, 1);
}

#include "main.h"
/**
 *_puts - entry point
 *@str: string
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}

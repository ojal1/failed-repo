#include "main.h"

/**
 * _printint - print integers.
 * @values:  passed values.
 * Return:  passed values.
 */
int _printint(va_list values)
{
	int num = va_arg(values, int);
	int count = 0;
	char buffer[20];

	count += sprintf(buffer, "%d", num);
	write(1, buffer, count);
	return (count);
}



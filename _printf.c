#include "main.h"
#include <stdarg.h>
#include <stddef.>
/**
 *_printf - recreate the function printf
 *
 *@format: is a character string
 *Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j, k;
	char *ptr;

	va_list(args);
	va_start(args, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case (s):
			j = 0;
			ptr[j] = va_arg(args, char);
			write(1, &s, 1);
			j++;
				break;

			case (c):
			ptr = va_arg(args, int);
			write(1, &c, 1);
				break;

			case ('%'):
			ptr = va_arg(args, char);
			write(1, &'%', 1);
				break;
		}
		write(1, &format[i], 1);
	}
	i++;
	return (0);
}

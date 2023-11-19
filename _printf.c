#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *_printf - recreate the function printf
 *
 *@format: is a character string
 *Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j;
	char *ptr = NULL;
	
	va_list(args);
	va_start(args, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 's':
			if (ptr == NULL)
			{
				return (0);
			}
			ptr = va_arg(args, char *);
			while (ptr[j])
				j++;
			write(1, "&s", 1);
				break;

			case 'c':
			ptr = va_arg(args, char *);
			write(1, "&c", 1);
				break;
			
			default:
				break;

		}
		write(1, &format[i], 1);
		i++;
	}
	return(0);
	va_end(args);
}

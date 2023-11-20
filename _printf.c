#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Recreates the printf function
 * @format: A character string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0, j = 0;
    char *ptr;
    int count = 0;

    va_list args;
    va_start(args, format);

    while (format != NULL && format[i])
    {
        if (format[i] == '%')
        {
            i++;

            switch (format[i])
            {
            case '%':
                write(1, &format[i], 1);
                count++;
                break;

            case 's':
                ptr = va_arg(args, char *);
                if (ptr == NULL)
                {
                    write(1, "(NULL)", 6);
                    count += 6;
                }
                else
                {
                    while (ptr[j] != '\0')
                    {
                        write(1, &ptr[j], 1);
                        j++;
                        count++;
                    }
                }
                break;

            case 'c':
                // Use int for 'c' type and no need to check for NULL
                write(1, &va_arg(args, int), 1);
                count++;
                break;

            default:
                write(1, "%", 1);
                write(1, &format[i], 1);
                count += 2;
            }
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }
    va_end(args);
    return count;
}

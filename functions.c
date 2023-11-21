#include "main.h"

/**
 * _print_int - Print numbers based on the specifier.
 * @specifier: character ('d' or 'i').
 * @args: Variable argument
 * @count: Pointer to the count of printed characters.
 */
void _print_int(char specifier, va_list args, int *count)
{
    if (specifier == 'd' || specifier == 'i')
    {
        int number = va_arg(args, int);
        int divider = 1;

        if (number < 0)
        {
            write(1, "-", 1);
            (*count)++;
            number = -number;
        }

        while (number / divider > 9)
            divider *= 10;

        while (divider != 0)
        {
            char digit = '0' + number / divider;
            write(1, &digit, 1);
            (*count)++;
            number %= divider;
            divider /= 10;
        }
    }
}

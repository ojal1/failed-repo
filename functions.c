#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printint_d - print a signed integer.
 * @args: parameters.
 * Return: Count.
 */

int _printint_d(va_list args)
{
	int count = 0;
	char num_str[12];
	int len = 0, i, num = va_arg(args, int);

	if (num == 0)
	{
		write(1, "0", 1);
		count++;
	}

	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	while (num != 0)
	{
		num_str[len++] = num % 10 + '0';
		num /= 10;
	}

	for (i = len - 1; i >= 0; i--)
	{
		write(1, &num_str[i], 1);
		count++;
	}

	return (count);
}

/**
 * _printint_i - print a unsigned integer.
 * @args: Parameters.
 * Return: Count.
 */

int _printint_i(va_list args)
{
	int count = 0;
	char num_str[12];
	int len = 0, i, num = va_arg(args, int);

	if (num == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else
	{
		while (num != 0)
		{
			num_str[len++] = num % 10 + '0';
			num /= 10;
		}

		for (i = len - 1; i >= 0; i--)
		{
			write(1, &num_str[i], 1);
			count++;
		}
	}

	return (count);
}

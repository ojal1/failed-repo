#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*Function Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _printint_d(va_list args);
int _printint_i(va_list args);
#endif

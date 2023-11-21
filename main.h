#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*Function Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _putchar(char);
int _print_int(va_list args);
#endif

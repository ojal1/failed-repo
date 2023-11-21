#include "main.h"

/**
 * print_int - print integer
 * @num: ... 
 */

void print_int(int num) {
    char buffer[12];
    int i = 0;
    while (num != 0) {
        buffer[i++] = '0' + num % 10;
        num /= 10;
    }
    if (i == 0) {
        buffer[i++] = '0';
    }

    while (i > 0) {
        write(STDOUT_FILENO, &buffer[--i], 1);
    }
}

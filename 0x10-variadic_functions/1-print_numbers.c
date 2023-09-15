#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers followed by new line
 * @*separator: the string to be printed between numbers
 * @n: num of arguments
 * @...: A variable number of paramters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
int x;
x = va_arg(ptr, int);
printf("%d\n", x);
printf("%s", separator);
}
printf("\n");
}

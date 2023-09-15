#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  Calucates the sum of its arguments
 * @n: num of argument
 * @...: A variable number of paramters 
 *  Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
sum = sum + x;
}
va_end(args);
return (sum);
}

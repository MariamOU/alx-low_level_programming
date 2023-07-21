#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the variadic function
 * @n: first parameter of the variadic function
 * Description: 'Program uses sum_them_all'
 * Return: an int
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
int sum = 0;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - the variadic function
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Description: 'Program uses print_numbers'
 * Return: an int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int integer;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
inetger = va_arg(args, int);
printf("Integer number %d", integer);

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

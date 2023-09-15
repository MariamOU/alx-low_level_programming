#include<stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>
/**
 * print_numbers - The variadic function
 * @separator: The string printed between integers
 * @n: Number of integers passed to the function
 * Description: Uses print_number
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
x = va_arg(args, unsigned int);

printf("%d", x);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}

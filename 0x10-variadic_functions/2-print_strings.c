#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - the variadic function
 * @separator: the string to be printed between numbers
 * @n: number of strings passed to the function
 * Description: 'Program uses print_strings'
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
char *string = va_arg(args, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
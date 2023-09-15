#include<stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>
/**
 * print_strings - The variadic function
 * @separator: The string printed between strings
 * @n: Number ofstrings passed to the function
 * Description: Uses print_strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *x;


va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
x = va_arg(args, char *);
if (x == NULL)
{
printf("(nil)");
}
else
{
printf("%s", x);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}

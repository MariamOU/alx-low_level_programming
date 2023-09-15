#include<stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>
/**
 * print_all - The variadic function
 * @format: Number of integers passed to the function
 * Description: Uses print_all
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
int j = 0;
char c;
int i;
double f;
char *s;
char *separator = "";

va_list args;
va_start(args, format);
while (format != NULL && format[j] != '\0')
{
if (format[j] == 'c')
{
c = va_arg(args, int);
printf("%s%c", separator, c);
}
else if (format[j] == 'i')
{
i = va_arg(args, int);
printf("%s%d", separator, i);
}
else if (format[j] == 'f')
{
f = va_arg(args, double);
printf("%s%f", separator, f);
}
else if (format[j] == 's')
{
s = va_arg(args, char *);
if (s == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, s);
}
separator = ", ";
j++;
}
printf("\n");
va_end(args);
}
}

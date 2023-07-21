#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - the variadic function
 * @format: list of types of arguments passed to the function
 * Description: 'Program uses print_all'
 * Return: anything
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
va_start(args, format);

while (format[i] != '\0')
{
if (format[i] == 'c')
{
int charac = va_arg(args, int);
printf("%c", charac);
printf(", ");
}
else if (format[i] == 'i')
{
int I_number = va_arg(args, int);
printf("%d", I_number);
printf(", ");
}
else if (format[i] == 'f')
{
double F_number = va_arg(args, double);
printf("%f", F_number);
printf(", ");
}
else if (format[i] == 's')
{
char *string = va_arg(args, char *);
if (string == NULL)
{
printf("(nil)");
printf(", ");
}
else
{
printf("%s", string);
}
}
i++;
}
va_end(args);
printf("\n");
}

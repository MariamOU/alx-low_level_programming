#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - the first helper function
 * @charac: the character passed to the function
 * Description: 'Program uses print_char'
 * Return: a char
 */
void print_char(int charac)
{
printf("%c", charac);
printf(", ");
}

/**
 * print_int - the second helper function
 * @I_number: the character passed to the function
 * Description: 'Program uses print_int'
 * Return: an int
 */
void print_int(int I_number)
{
printf("%d", I_number);
printf(", ");
}

/**
 * print_float - the third helper function
 * @F_number: the character passed to the function
 * Description: 'Program uses print_float'
 * Return: a float
 */
void print_float(double F_number)
{
printf("%f", F_number);
printf(", ");
}

/**
 * print_string - the fourth helper function
 * @string: the string passed to the function
 * Description: 'Program uses print_string'
 * Return: a string
 */
void print_string(char *string)
{
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
}

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
switch (format[i])
{
case 'c':
print_char(va_arg(args, int));
break;
case 'i':
print_int(va_arg(args, int));
break;
case 'f':
print_float(va_arg(args, double));
break;
case 's':
print_string(va_arg(args, char *));
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}

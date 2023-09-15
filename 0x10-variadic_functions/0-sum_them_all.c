#include<stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - The function
 * @n: Number of arguments passed in the function sum_them_all
 * Description:
 * Return: The sum of all arguments or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
int x;

if(n == 0)
{
return (0);
}
else
{
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
x = va_arg(args, unsigned int);
sum += x;
}
va_end(args);
return (sum);
}
}

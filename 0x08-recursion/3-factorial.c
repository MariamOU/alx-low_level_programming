#include<stdio.h>
#include "main.h"
/**
 * factorial - the entry function
 * @n: the input number
 * Description: 'Program uses the function factorial'
 * Return:the factorial of a given number n or -1 if n is lower than 0
 */


int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

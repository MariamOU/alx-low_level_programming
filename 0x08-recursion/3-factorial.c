#include "main.h"
/**
 * factorial - the factorial function
 * @n: the variable n
 * Description: 'Program uses factorial'
 * Return: the factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

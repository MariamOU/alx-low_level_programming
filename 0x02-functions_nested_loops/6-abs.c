#include<stdio.h>
#include "main.h"
/**
 * _abs - the entry function
 * @n: the character that is checked
 * Description: 'Program uses _abs'
 * Return: an abs value
 */
int _abs(int n)
{
int a;

if (n > 0)
{
a = n;
_putchar(a);
}
else if (n == 0)
{
a = -n;
_putchar(a);
}
else
{
a = -n;
_putchar(a);
}
}

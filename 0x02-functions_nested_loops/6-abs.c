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

if (n < 0)
{
a = n * -1;
return (a);
}
return (n);
}

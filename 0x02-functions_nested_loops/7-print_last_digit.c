#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - the entry function
 * @n: the character that is checked
 * Description: 'Program uses print_last_digit'
 * Return: value
 */
int print_last_digit(int n)
{
int a;

a = n % 10;
if (a < 0)
{
a = a * -1;
}
_putchar('0' + a);
return (a);
}

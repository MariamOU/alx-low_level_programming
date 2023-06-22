#include<stdio.h>
#include "main.h"
/**
 * print_sign - the entry function
 * @n: the character that is checked
 * Description: 'Program uses print_sign'
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');

	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}

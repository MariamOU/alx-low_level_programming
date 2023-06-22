#include<stdio.h>
#include<unistd.h>
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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

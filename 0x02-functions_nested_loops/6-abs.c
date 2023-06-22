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
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		_putchar(-n);
	}
}

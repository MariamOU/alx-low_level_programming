#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - the entry function
 * @n: the character that is checked
 * Description: 'Program uses the function print_to_98'
 * Return: different values of n
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		if (n > 0)
		{
			_putchar(n);
			printf(",");
			printf("\n");
		}
	}
}

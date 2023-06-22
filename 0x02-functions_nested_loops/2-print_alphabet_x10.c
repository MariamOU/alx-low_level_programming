#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - the entry function   
 * Description: 'Program uses _putchar'
 * Return: Always 0 (SUCCESS)
 */
void print_alphabet_x10(void)
{
char i;
int j;

for (i = 'a'; i <= 'z'; i++)
{
	for (j = 0; j <= 9; j++)
	{
		_putchar(i);
	}
}
_putchar('\n');
}

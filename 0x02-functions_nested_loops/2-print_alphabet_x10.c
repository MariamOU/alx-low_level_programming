#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - the entry function
 * Description: 'Program uses print_alphabet_x10'
 * Return: alphabet 10 times
 */
void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j <= 9; j++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
}

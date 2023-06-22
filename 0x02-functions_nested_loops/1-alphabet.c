#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - the entry function
 * Description: 'Program uses _putchar'
 * Return: Alphabet
 */
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

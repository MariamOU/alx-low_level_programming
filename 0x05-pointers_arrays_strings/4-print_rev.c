#include<stdlib.h>
#include "main.h"
/**
 * print_rev - the entry function
 * @s: the variable s
 * Description: 'Program uses _putchar'
 * Return: a string
 */
void print_rev(char *s)
{
int i;
int lenght = 0;

while (s[lenght] != '\0')
{
lenght++;
}
for (i = lenght - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

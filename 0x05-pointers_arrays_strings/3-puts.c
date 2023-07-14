#include<stdlib.h>
#include "main.h"
/**
 * _puts - the entry function
 * @s: the variable s
 * Description: 'Program uses _putchar'
 * Return: an int
 */
void _puts(char *s)
{
int i = 0;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
_putchar('\n');
}
}

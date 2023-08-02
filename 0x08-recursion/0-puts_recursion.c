#include<stdlib.h>
#include<unistd.h>
#include "main.h"
/**
 * _puts_recursion - the entry function
 * @s: the variable s
 * Description: 'Program uses _putchar'
 * Return: a string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

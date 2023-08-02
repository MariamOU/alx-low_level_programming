#include<stdlib.h>
#include<unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - the entry function
 * @s: the variable s
 * Description: 'Program uses _print_rev_recursion'
 * Return: a string
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

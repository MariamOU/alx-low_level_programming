#include "main.h"
/**
 * _print_rev_recursion - the entry function
 * @s: the variable s
 * Description: 'Program uses _print_rev_recursion'
 * Return: a string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

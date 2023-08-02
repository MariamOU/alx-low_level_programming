#include "main.h"
/**
 * _strlen_recursion - the entry function
 * @s: the variable s
 * Description: 'Program uses _strlen_recursion'
 * Return: The lenght of a string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

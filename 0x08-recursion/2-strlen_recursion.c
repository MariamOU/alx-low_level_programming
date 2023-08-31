#include<stdio.h>
#include "main.h"
/**
 * _strlen_recursion - the entry function
 * @s: the character that is checked
 * Description: 'Program uses the function _strlen_recursion'
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

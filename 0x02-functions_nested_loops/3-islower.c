#include<stdio.h>
#include "main.h"
/**
 * _islower - the entry function
 * @c: the character that is checked
 * Description: 'Program uses _putchar'
 * Return: Always 0 (SUCCESS)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

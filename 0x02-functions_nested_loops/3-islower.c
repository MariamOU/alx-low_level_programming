#include<stdio.h>
#include "main.h"
/**
 * _islower - the entry function
 * @c: the character that is checked
 * Description: 'Program uses _islower'
 * Return: 0 or 1
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

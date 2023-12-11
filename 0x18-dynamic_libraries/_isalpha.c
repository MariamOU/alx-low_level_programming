#include<stdio.h>
#include "main.h"
/**
 * _isalpha - the entry function
 * @c: the character that is checked
 * Description: 'Program uses _isalpha'
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

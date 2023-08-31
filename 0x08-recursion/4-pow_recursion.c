#include<stdio.h>
#include "main.h"
/**
 * _pow_recursion - the entry function
 * @x: a number
 * @y: a number
 * Description: 'Program uses the function _pow_recursion'
 * Return: x raised by y or -1 if y is lower than 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}

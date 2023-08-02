#include "main.h"
/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: the variable x
 * @y: the variable y
 * Description: 'Program uses _pow_recursion'
 * Return: the value of x power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

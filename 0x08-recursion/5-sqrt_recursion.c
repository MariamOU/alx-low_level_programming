#include "main.h"
/**
 * _sqrt_recursion_helper - helper function
 * @n: the input number for which we want to find the natural square root
 * @start: the lower boundary of the range
 * @end: the higher boundary of the range
 * Description: 'Program uses _sqrt_recursion_helper'
 * Return: the value of x power y
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid = start + (end - start) / 2;
int midSquared = mid * mid;

if (start > end)
{
return (-1);
}
if (midSquared == n)
{
return (mid);
}
else if (midSquared > n)
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}
else
{
return (_sqrt_recursion_helper(n, mid + 1, end));
}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the variable n
 * Description: 'Program uses _sqrt_recursion'
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_helper(n, 0, n));
}

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if ((a > b && b > c) || (a > c && c > b) || (b == c && b < a))
{
largest = a;
}
else if ((b > a && a > c) || (b > c && c > a) || (a == c && a < b))
{
largest = b;
}
else if ((c > a && a > b) || (c > b && b > a) || (a == b && a < c))
{
largest = c;
}
else if (a == b && a > c)
{
largest = a;
largest = b;
}
else if (a == c && a > b)
{
largest = a;
largest = c;
}
else if (b == c && b > a)
{
largest = b;
largest = c;
}
else
{
largest = a;
largest = b;
largest = c;
}

return (largest);
}

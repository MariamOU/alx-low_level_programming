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

    if (a > b && b > c)
    {
      if (a != b && b !=c)
	{
        largest = a;
	}
      else if (a == b && b != c)
	{
	  largest = a;
	  largest = b;
	}
      else
	{
	  largest = a;
	  largest = b;
	  largest = c;
	}
    }
    else if (b > a && a > c)
    {
       if (b != a && a !=c)
        {
        largest = b;
        }
      else if (b == a && a != c)
        {
          largest = a;
          largest = b;
        }
      else
        {
          largest = a;
	  largest = b;
	  largest = c;
        }
    }
    else if (c > a && a > b)
    {
       if (c != a && a !=b)
        {
        largest = c;
        }
      else if (c == a && a != b)
        {
          largest = a;
          largest = c;
        }
      else
        {
          largest = a;
	  largest = b;
	  largest = c;
        }
    }

    return (largest);
}

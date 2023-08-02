#include <math.h>
#include "main.h"
/**
 * is_prime_helper - helper function
 * @n: The input integer to check
 * @divisor: The divisor being checked
 *
 * Return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor > sqrt(n))
return (1);

if (n % divisor == 0)
return (0);
return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The input integer
 *
 * Return: 1 if the input is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}

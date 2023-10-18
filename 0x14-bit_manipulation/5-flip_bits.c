#include<stdio.h>
#include "main.h"
/**
 * flip_bits - The function
 * @n: the initial number
 * @m: the target number
 * Return: 1(Success) or -1(Error)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int count;

xor_result = n ^ m;
count = 0;

while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}

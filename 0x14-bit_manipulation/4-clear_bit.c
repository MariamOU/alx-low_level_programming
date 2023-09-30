#include <stdio.h>
#include"main.h"
/**
 * clear_bit - The function
 * @n: A pointer to the unsigned long integer
 * @index: The index of the bit to clear
 * Return: 1(Success) or -1(Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n & (~(1UL << index));

return (1);
}

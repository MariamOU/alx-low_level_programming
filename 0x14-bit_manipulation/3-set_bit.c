#include <stdio.h>
#include"main.h"
/**
 * set_bit - The function
 * @n: A pointer to the unsigned long integer
 * @index: The index of the bit
 * Return: 1(SUCCESS)or -1(Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | (1UL << index);

return (1);
}

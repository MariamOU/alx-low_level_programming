#include <stdio.h>
#include"main.h"
/**
 * get_bit - The function
 * @n: The unsigned long integer
 * @index: The index of the bit to retrieve
 * Return: The bit at the specified index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n >> index) & 1);
}

#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - the function that converts binary to uint
 * @b: the string
 *Description: program uses the function binary_to_uint
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int lenght;
int i;

if (b == NULL)
{
return (0);
}
lenght = strlen(b);

for (i = 0; i < lenght; i++)
{
if (b[i] == '0')
{
result = (result << 1) | 0;
}
else if (b[i] == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
}

return (result);
}

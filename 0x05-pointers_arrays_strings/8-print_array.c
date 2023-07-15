#include<stdlib.h>
#include "main.h"
/**
 * print_array - the entry function
 * @a: the variable a
 * @n: the second variable n
 * Description: 'Program uses printf'
 * Return: a string
 */
void print_array(int *a, int n)
{
int i;
int *ptr = a;

for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d", *ptr);
printf(",");
printf(" ");
ptr++;
}
else
{
printf("%d", *ptr);
ptr++;
}
}
printf("\n");
}

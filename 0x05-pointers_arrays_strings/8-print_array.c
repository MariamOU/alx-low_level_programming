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
int arr[a];

for (a = 0; a < n; a++)
{
printf("[%d]", arr[a]);
}
printf("\n");
}

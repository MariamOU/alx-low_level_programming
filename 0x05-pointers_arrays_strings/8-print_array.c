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
int arr[n];

for (i = 0; i < n; i++)
{
printf("[%d]", arr[i]);
}
printf("\n");
}

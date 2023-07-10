#include<stdio.h>
#include "main.h"
/**
 * swap_int - the entry function
 * @a: the first integer
 * @b: the second integer
 * Description: 'Program uses the function swap_int'
 */
void swap_int(int *a, int *b)
{
*a = &a;
*b = &b;
*a = b;
*b =a;
}

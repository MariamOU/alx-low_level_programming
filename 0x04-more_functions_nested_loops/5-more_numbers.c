#include<stdio.h>
#include "main.h"
/**
 * more_numbers - the entry function
 * Description: 'Program uses the function _putchar to print numbers (0 to 14)
 * 10 times'
 */
void more_numbers(void)
{
int a;
int b;

for (a = 0; a <= 14; a++)
{
for (b = 0; b <= 9; b++)
{
_putchar('0' + a);
}
}
_putchar('\n');
}

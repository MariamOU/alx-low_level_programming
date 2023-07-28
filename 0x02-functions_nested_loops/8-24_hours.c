#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - the entry function
 * Description: 'Program uses jack_bauer'
 * Return: Rien
 */
void jack_bauer(void)
{
int i;
int j;

for (i = 0; i <= 23; i++)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
_putchar(':');
for (j = 0; j <= 59; j++)
{
_putchar('0' + j / 10);
_putchar('0' + j % 10);
_putchar('\n');
}
}
}

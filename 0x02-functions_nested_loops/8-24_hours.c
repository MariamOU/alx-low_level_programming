#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - the entry function
 * Description: 'Program uses jack_bauer'
 * Return: Rien
 */
void jack_bauer(void)
{
int i = 00;
int j = 00;

while (i <= 59)
{
_putchar(i);
i++;
while (j <= 23)
{
_putchar(58);
_putchar(j);
}
}
}

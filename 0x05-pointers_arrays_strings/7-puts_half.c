#include<stdlib.h>
#include "main.h"
/**
 * puts_half - the entry function
 * @str: the variable str
 * Description: 'Program uses _putchar'
 * Return: a string
 */
void puts_half(char *str)
{
int i;
int lenght = strlen(str[i]);

for (i = (lenght - 1) / 2; i < (lenght - 1); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

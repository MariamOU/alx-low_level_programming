#include<stdlib.h>
#include "main.h"
/**
 * puts2 - the entry function
 * @str: the variable str
 * Description: 'Program uses _putchar'
 * Return: a string
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}

#include<stdlib.h>
#include "main.h"
/**
 * _strlen - the entry function
 * @s: the variable s
 * Description: 'Program uses putchar'
 * Return: an int
 */
int _strlen(char *s)
{
int lenght = 0;

while (*s++)
{
lenght++;
}
return (lenght);
}

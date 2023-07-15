#include<stdlib.h>
#include "main.h"
/**
 * rev_string - the entry function
 * @s: the variable s
 * Description: 'Program uses _putchar'
 * Return: a string
 */
void rev_string(char *s)
{
int i;
int j;
int lenght = strlen(s);

for (i = 0; j = lenght - 1; i < 0; i++; j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

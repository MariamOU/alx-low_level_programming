#include<stdlib.h>
#include<string.h>
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
int lenght = 0;
lenght = strlen(s);

for (i = 0; j = lenght - 1; i < j; i++; j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

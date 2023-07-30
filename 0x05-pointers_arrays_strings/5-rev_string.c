#include<stdlib.h>
#include<string.h>
#include "main.h"
/**
 * rev_string - the entry function
 * @s: the variable s
 * Description: 'Program uses rev_string'
 * Return: a string
 */
void rev_string(char *s)
{
int i;
int length;

if (s == NULL)
{
return;
}
length = 0;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}

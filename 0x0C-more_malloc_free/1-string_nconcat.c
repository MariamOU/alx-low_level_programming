#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - check the code
 * @s1: the first string
 * @s2: the second string
 * @n: the first bytes of s2
 * Description: 'Program uses *string_nconcat function'
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len;
unsigned int s2_len;
char *result;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}

result = (char *)malloc(s1_len + n + 1);

if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}

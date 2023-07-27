#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - function of concatenation
 * @s1: the first string
 * @s2: the second string
 * Description: 'Program uses *str_concat'
 * Return: a string
 */
char *str_concat(const char *s1, const char *s2)
{
size_t total_length;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

total_length = strlen(s1) + strlen(s2) + 1;
concatenated = (char *)malloc(total_length);

if (concatenated != NULL)
{
strcpy(concatenated, s1);
strcat(concatenated, s2);
}

return (concatenated);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - the concatenation function
 * @s1: the first string
 * @s2: the second string
 * @n: the first bytes of s2
 * Description: 'Program uses *string_nconcat'
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1;
unsigned int length2;
unsigned int totallength;
char *concat;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

length1 = strlen(s1);
length2 = strlen(s2);

if (n >= length2)
{
n = length2;
}

totallength = length1 + n + 1;
concat = (char *)malloc(totallength *sizeof(char));
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strncat(concat + length1, s2, n);

return (concat);
}

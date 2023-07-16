#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
/**
 * main - the entry function
 * @argc: the variable argc
 * @argv: the second v argv
 * Description: 'Program uses printf'
 * Return: a string
 */
int main(int argc, char *argv[])
{
int i;
int j;

for (i = 1; i < argc; i++)
{
j = atoi(argv[i]);
if (isdigit(j))
{
j += j;
printf("%d", j);
}
else
{
printf("Error");
printf("\n");
return (1);
}
}
return (0);
}

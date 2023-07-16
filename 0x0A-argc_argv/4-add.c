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
int j = 0;

for (i = 1; i < argc; i++)
{
if (isdigit(argv[i]))
{
j = j + atoi(argv[i]);
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
 

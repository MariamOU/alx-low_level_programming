#include<stdlib.h>
#include<stdio.h>
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

if (argc > 0)
{
for (i = 1; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
}
return (0);
}

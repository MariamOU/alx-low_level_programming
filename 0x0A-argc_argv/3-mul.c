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
if (argc == 3)
{
int i = atoi(argv[1]);
int j = atoi(argv[2]);
int multip = i * j;

printf("%d", multip);
printf("\n");
}
else
{
printf("Error");
printf("\n");
return (1);
}
return (0);
}
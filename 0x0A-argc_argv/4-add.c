#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_all_digits - is al digit test function
 * @str: the variable tested
 * Description: 'Program uses is_all_digits'
 * Return: a booleen
 */
bool is_all_digits(const char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
{
return (false);
}
str++;
}
return (true);
}

/**
 * main - the entry function
 * @argc: the variable argc
 * @argv: the second v argv
 * Description: 'Program uses printf'
 * Return: a string
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_all_digits(argv[i]))
{
int num = atoi(argv[i]);
if (num > 0)
{
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}

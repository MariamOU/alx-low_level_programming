#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program uses putchar'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
char c;

for (c = 0; c <= 10; c++)
{
{
putchar('0' + c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
}
putchar('\n');
return (0);
}

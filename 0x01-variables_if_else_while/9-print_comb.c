#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program uses putchar'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int c;
int d;

for (c = 0; c <= 9; c++)
{
putchar('0' + c);
for (d = 0; d < 9; d++)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

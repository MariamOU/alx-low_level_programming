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
for (d = 0; d < 9; d++)
{
putchar('0' + c);
putchar(',' + d);
putchar(' ' + d);
}
}
putchar('\n');
return (0);
}

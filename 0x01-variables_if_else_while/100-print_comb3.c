#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program prints all the different combinations of two digits'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int c;
int d;

for (c = 0; c <= 9; c++)
{
for (d = c; d <= 9; d++)
{
if (c != d)
{
putchar('0' + c);
putchar('0' + d);
if (c != 8 || d != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program prints differents combinations of 3 digits'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int a;
int b;
int c;

for (a = 0; a <= 9; a++)
{
for (b = a; b <= 9; b++)
{
for (c = b; c <= 9; c++)
{
if ((a != b) && (a != c) && (b != c))
{
putchar('0' + a);
putchar('0' + b);
putchar('0' + c);
if (a != 7 || b != 8 || c != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

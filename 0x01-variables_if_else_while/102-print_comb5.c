#include<stdio.h>
/**
 * main - the entry function
 * Description: 'Program prints differents combinations of two two digits'
 * Return: Alway 0 (SUCCESS)
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (j < 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}

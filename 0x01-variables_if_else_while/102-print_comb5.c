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

for (i = 0; i < 98; i++)
{
for (j = i + 1; j < 99; j++)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (i == 98 && j == 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

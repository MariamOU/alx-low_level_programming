#include<unistd.h>
/**
 * _putchar - check the code
 * @i: the character in check
 * Description: 'Program uses _putchar function'
 * Return: Always 0
 */
int _putchar(char i)
{
return write(1, &i, 1);
}

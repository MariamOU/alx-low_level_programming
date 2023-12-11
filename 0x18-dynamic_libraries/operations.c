#include <stdio.h>

/**
 * add - add 2 numbers
 * @a: the first number
 * @b: the second number
 * Description: 'Program uses add function'                 
 * Return: a + b
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - sub 2 numbers
 * @a: the first number
 * @b: the second number
 * Description: 'Program uses sub function'                 
 * Return: a - b
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - multiply 2 numbers
 * @a: the first number
 * @b: the second number
 * Description: 'Program uses mul function'                 
 * Return: a * b
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - divide 2 numbers
 * @a: the first number
 * @b: the second number
 * Description: 'Program uses div function'                 
 * Return: a / b or 0 if error
 */
int div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Cannot divide by zero\n");
return (0);
}
}

/**
 * mod - modulo of 2 numbers
 * @a: the first number
 * @b: the second number
 * Description: 'Program uses mod function'                 
 * Return: a % b or 0 if error
 */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
printf("Error\n");
return (0);
}
}

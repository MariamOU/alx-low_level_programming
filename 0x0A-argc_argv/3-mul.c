#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of strings
 * Description: 'Program uses main function'
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int number1;
int number2;
int mulresult;

    if (argc != 3)
{
        printf("Error\n");
        return (1);
    }

    number1 = atoi(argv[1]);
    number2 = atoi(argv[2]);

    mulresult = number1 * number2;
    printf("%d\n", mulresult);

    return (0);
}

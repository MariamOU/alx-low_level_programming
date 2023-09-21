#include <stdio.h>
#include "lists.h"
/**
 * printBeforeMain - The helper function
 * Description: program uses the function printBeforeMain
 * Return:nothing
*/
void printBeforeMain()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

/**
 * before_main - The function
 * Description: program uses the function before_main
 * Return: nothing
*/
__attribute__((constructor))
void before_main()
{
printBeforeMain();
}

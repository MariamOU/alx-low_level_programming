#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * free_grid - check the code
 * @grid: width of the array
 * @height: height of the array
 * Description: 'Program uses free_grid function'
 * Return: A pointer or NULL in failure
 */

void free_grid(int **grid, int height)
{
int i;

if (grid != NULL)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
}

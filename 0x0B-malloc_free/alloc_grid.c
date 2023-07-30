#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - the alloc grid function
 * @width: 2 dimensional grid
 * @height: the height of the grid
 * Description: 'Program uses alloc_grid'
 * Return:
 */
int** alloc_grid(int width, int height)
{
int i;
int j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
int** grid = (int**)malloc(height * sizeof(int*));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int*)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j];
}
free(grid);
return (NULL);
}
}
return (grid);
}

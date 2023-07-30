#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - the free grid function
 * @grid: 2 dimensional grid
 * @grid: the height of the grid
 * Description: 'Program uses free_grid'
 * Return:
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL) 
{
return;
}
for (i = 0; i < height; i++) 
{
free(grid[i]);
}
free(grid);
}

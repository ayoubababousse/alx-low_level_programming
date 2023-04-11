#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees 2D array
*
* @grid: 2D array to free
* @height: height of the array
*
* Description: frees memory allocated for a 2D array
* Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
{
for (i = 0; i < height; i++)
free(grid[i]);
}
free(grid);
}

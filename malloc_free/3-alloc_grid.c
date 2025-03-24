#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure or if
 * width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

    /* Check if width or height is invalid */
if (width <= 0 || height <= 0)
return (NULL);

    /* Allocate memory for an array */
    /* Check if memory allocation failed */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

    /* Allocate memory for each row */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)  /* Check if allocation for a row failed */
{
  /* Free allocated rows before returning NULL */
while (i-- > 0)
free(grid[i]);
free(grid);
return (NULL);
}

  /* Initialize all in the row to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}

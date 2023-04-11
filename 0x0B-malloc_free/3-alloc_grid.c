/**
 * alloc_grid - creates a two dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array, NULL if failure
 */

int **alloc_grid(int width, int height)
{
int **grid, i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = i - 1; j >= 0; j--)
free(grid[j]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}

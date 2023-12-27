#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (List[List[int]]): List of lists representing the grid

    Returns:
    - int: Perimeter of the island
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for the shared side between adjacent land cells
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  

    return perimeter

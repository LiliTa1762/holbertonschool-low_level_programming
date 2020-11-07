#!/usr/bin/python3


R = 5
C = 6


def num_of_sides(grid, i, j):
    """Find the number of covered side for grid[i][j]."""
    count = 0

    # Going up
    if (i > 0 and grid[i - 1][j]):
        count += 1

    # Going left
    if (j > 0 and grid[i][j - 1]):
        count += 1

    # Going down
    if (i < R - 1 and grid[i + 1][j]):
        count += 1

    # Going Right
    if (j < C - 1 and grid[i][j + 1]):
        count += 1

    return count


def island_perimeter(grid):
    """Getting the perimeter"""

    perimeter = 0

    # Traversing the grid and finding "1"
    # calculate their contribution.
    for i in range(0, R):
        for j in range(0, C):
            if (grid[i][j]):
                perimeter += (4 - num_of_sides(grid, i, j))

    return perimeter

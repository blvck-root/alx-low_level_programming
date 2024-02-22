#!/usr/bin/python3
"""
Module contains a function to calculate the perimeter of an island
"""


def island_perimeter(grid):
    """Calculate perimeter of an island"""
    col_len = len(grid[0])
    row_len = len(grid)
    perimeter = 0

    for i in range(1, row_len - 1):
        for j in range(1, col_len - 1):
            if grid[i][j] == 1:
                up = grid[i - 1][j]
                down = grid[i + 1][j]
                left = grid[i][j - 1]
                right = grid[i][j + 1]

                # add number of 0 value neighbor cells to perimeter
                cell = 4 - (up + down + left + right)
                if cell == 4:
                    return 4 if perimeter == 0 else 0
                else:
                    perimeter += cell

    return perimeter

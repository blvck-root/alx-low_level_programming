#!/usr/bin/python3
"""
Module contains a function to calculate the perimeter of an island
"""


def island_perimeter(grid):
    """Calculate perimeter of an island"""
    col_len = len(grid[0])
    row_len = len(grid)
    perimeter = 0

    for i in range(row_len):
        for j in range(col_len):
            if grid[i][j] == 1:
                up = grid[i - 1][j] if i >= 0 else 0
                down = grid[i + 1][j] if i < row_len else 0
                left = grid[i][j - 1] if j >= 0 else 0
                right = grid[i][j + 1] if j < col_len else 0

                # add number of 0 value neighbor cells to perimeter
                perimeter += 4 - (up + down + left + right)

    return perimeter

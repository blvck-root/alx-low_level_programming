#!/usr/bin/python3
"""
Module contains a function to calculate the perimeter of an island
"""


def island_perimeter(grid):
    """Calculate perimeter of an island"""
    visited = set()
    row_len = len(grid)
    col_len = len(grid[0])

    def depth_first(i, j):
        if grid[i][j] == 0 or i < 0 or j < 0 or \
           i >= row_len or j >= col_len:
            return 1
        if (i, j) in visited:
            return 0

        visited.add((i, j))
        perimeter = depth_first(i, j - 1)
        perimeter += depth_first(i, j + 1)
        perimeter += depth_first(i - 1, j)
        perimeter += depth_first(i + 1, j)
        return perimeter

    for i in range(row_len):
        for j in range(col_len):
            if grid[i][j] == 1:
                return depth_first(i, j)
    return 0

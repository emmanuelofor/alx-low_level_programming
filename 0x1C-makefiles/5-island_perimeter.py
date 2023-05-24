#!/usr/bin/python3
"""
This module is designed to compute the perimeter of an island presented in a grid.
"""

def num_water_neighbors(grid, i, j):
    """
    This function calculates the number of neighboring cells that are water in a given grid.
    """
    
    count = 0

    # If the cell is in the first row or the cell above is water, increase the count
    if i <= 0 or not grid[i - 1][j]:
        count += 1
    # If the cell is in the first column or the cell to the left is water, increase the count
    if j <= 0 or not grid[i][j - 1]:
        count += 1
    # If the cell is in the last column or the cell to the right is water, increase the count
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        count += 1
    # If the cell is in the last row or the cell below is water, increase the count
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        count += 1

    return count


def island_perimeter(grid):
    """
    This function calculates the total perimeter of the island represented in the grid.
    """

    total_perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the cell is part of the island, add the number of its water neighbors to the total perimeter
            if grid[i][j]:
                total_perimeter += num_water_neighbors(grid, i, j)

    return total_perimeter


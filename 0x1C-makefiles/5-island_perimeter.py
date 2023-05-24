#!/usr/bin/python3
"""This module is responsible for determining the perimeter of an island within a grid."""


def num_water_neighbors(grid, i, j):
    """Calculates and returns the quantity of water-adjacent cells for a given cell in the grid."""

    num = 0

    # Increment count if the cell is at the top edge or its upper neighbor is water
    if i <= 0 or not grid[i - 1][j]:
        num += 1
    # Increment count if the cell is at the left edge or its left neighbor is water
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    # Increment count if the cell is at the right edge or its right neighbor is water
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    # Increment count if the cell is at the bottom edge or its lower neighbor is water
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Calculates and returns the total perimeter of the island represented in the grid."""

    perimeter = 0
    # Loop through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the cell is part of the island, add the number of its water neighbors to the total perimeter
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)

    return perimeter

#!/usr/bin/python3

"""
this is the island_perimeter
"""


def island_perimeter(grid):
    """
    calculate the perimeter of the island
    """

    numberOfRows = len(grid)
    numberOfColumns = len(grid[0])
    perimeter = 0

    # Iterate through the grid using nested loops
    for row in range(numberOfRows):
        for column in range(numberOfColumns):
            if grid[row][column] == 1:
                perimeter += 4  # Start by assuming all 4 sides are exposed

                # Check the neighbors (up, down, left, right)
                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 1  # Subtract 1 for each shared side
                if row < numberOfRows - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column < numberOfColumns - 1 and grid[row][column + 1] == 1:
                    perimeter -= 1

    return perimeter

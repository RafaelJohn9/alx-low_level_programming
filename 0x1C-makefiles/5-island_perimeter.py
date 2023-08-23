#!/usr/bin/python3
"""
a funtion that returns the perimeter of the island described in the grid
"""


def island_perimeter(grid):
    """
    gets the perimeter of the island
    """

    numberOfColumns = len(grid[0])
    numberOfRows = len(grid)
    perimeter = 0
    row = 0
    column = 0

    while (row != numberOfRows) and (column != numberOfColumns):
        # check for the end of the row
        if column == (numberOfColumns - 1):
            row += 1
            column = 0

        # searches for the island  and counts perimeter
        if grid[row][column] == 1:
            # for the row counting
            if row > 0:
                if grid[row-1][column] == 1:
                    perimeter += 1
            if row < (numberOfRows - 1):
                if grid[row+1][column] == 1:
                    perimeter += 1
            # for the column counting
            if column > 0:
                if grid[row][column-1] == 1:
                    perimeter += 1
            if column < (numberOfColumns - 1):
                if grid[row][column+1] == 1:
                    perimeter += 1
        row += 1
        column += 1

    return (perimeter)

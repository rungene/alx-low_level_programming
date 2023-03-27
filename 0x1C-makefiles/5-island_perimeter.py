#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """
    island_perimeter calculates pereimeter
    of the island.

    parameter:
        grid (array): An 0's and 1's array that represents an island
        sourrounded by land(1)
        sourrounded by water (0)

    return:
        perimeter of the island described in grid
    """
    #  check if the input grid is empty or not. If it's empty,
    # we return 0 as the perimeter.
    if not grid or not grid[0]:
        return 0

    perimeter = 0
    row = len(grid)
    col = len(grid[0])

    # iterate over each cell in the grid using a nested for loop.
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                # check top water surrouded
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # check bottom  water surrouded
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # check left water surrounded
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # check right water surounded
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter

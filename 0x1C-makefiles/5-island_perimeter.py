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
    rows = len(grid)
    col = len(grid[0])
    if grid == 0:
        water_zone = 0
        perimeter = peremiter + (2 * water_zone)
    elif grid == 1:
        land_zone = 1
        perimeter = perimeter + (2 * land_zone)
           
    # when completely srounded by water oneisland


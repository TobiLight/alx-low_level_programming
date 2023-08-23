#!/usr/bin/python3
# File: 5-island_perimeter.py
# Author: Oluwatobiloba Light
"""Defines function that measures an island perimeter."""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): List of list of integers

    Returns:
        The perimeter of the island defined in grid.
    """
    height = len(grid)
    width = len(grid[0])
    edge = 0
    size = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    edge += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    edge += 1
    return size * 4 - edge * 2

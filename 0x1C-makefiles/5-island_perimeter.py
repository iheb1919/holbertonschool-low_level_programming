#!/usr/bin/python3


def island_perimeter(grid):
    """returns the perimeter of island described in grid"""
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0 or j - 1 < 0:
                    per += 1
                if grid[i][j+1] == 0 or j + 1 > len(grid):
                    per += 1
                if grid[i-1][j] == 0 or i - 1 < 0:
                    per += 1
                if grid[i+1][j] == 0 or i + 1 > len(grid[i]):
                    per += 1
    return(per)

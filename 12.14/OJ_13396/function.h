#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>

#define ROW 6
#define COL 6

enum Direction
{
    None,
    Up,
    Down,
    Left,
    Right
};

int CheckIsValidDirection(char map[ROW][COL], int g_r, int g_c, enum Direction dir);
double CalculateDistance(int g_r, int g_c, int t_r, int t_c);

#endif
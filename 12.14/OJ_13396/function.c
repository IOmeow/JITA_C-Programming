#include "function.h"

int CheckIsValidDirection(char map[ROW][COL], int g_r, int g_c, enum Direction dir)
{
    if(dir==Up && g_r>0 && map[g_r-1][g_c]!='X')return 1;
    if(dir==Down && g_r<ROW-1 && map[g_r+1][g_c]!='X')return 1;
    if(dir==Left && g_c>0 && map[g_r][g_c-1]!='X')return 1;
    if(dir==Right && g_c<COL-1 && map[g_r][g_c+1]!='X')return 1;
    return 0;
}

double CalculateDistance(int g_r, int g_c, int t_r, int t_c)
{
    return sqrt(pow((double)(g_r-t_r),2)+pow((double)(g_c-t_c),2));
}
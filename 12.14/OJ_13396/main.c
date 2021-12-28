#include <stdio.h>
#include <string.h>
#include "function.h"

#define ROW 6
#define COL 6

void ReadMap(char ary[ROW][COL]);
void PrintMap(char ary[ROW][COL]);
void FindPath2Target(char map[ROW][COL], int g_r, int g_c, int t_r, int t_c);

int ghost_r, ghost_c;
int target_r, target_c;

int main()
{
    char map[ROW][COL];
    ReadMap(map);
    FindPath2Target(map, ghost_r, ghost_c, target_r, target_c);
    return 0;
}

void ReadMap(char ary[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL;)
        {
            char c;
            scanf("%c", &c);

            if (c == '-' || c == 'X' || c == 'g' || c == 't')
            {
                if (c == 'g')
                {
                    ghost_r = i;
                    ghost_c = j;
                }
                else if (c == 't')
                {
                    target_r = i;
                    target_c = j;
                }

                ary[i][j] = c;
                j++;
            }
        }
    }
}

void PrintMap(char ary[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        printf("%c", ary[i][0]);
        for (int j = 1; j < COL; j++)
        {
            printf(" %c", ary[i][j]);
        }
        printf("\n");
    }
}

void FindPath2Target(char map[ROW][COL], int g_r, int g_c, int t_r, int t_c)
{
    // init parameter to store previous direction
    enum Direction prevDir = None;

    // check if ghost reach target
    while (g_r != t_r || g_c != t_c)
    {
        enum Direction nextDir;
        double minDist = DBL_MAX;

        // check four direction
        if (CheckIsValidDirection(map, g_r, g_c, Up) && prevDir != Down)
        {
            double dist = CalculateDistance(g_r - 1, g_c, t_r, t_c);
            if (dist < minDist)
            {
                nextDir = Up;
                minDist = dist;
            }
        }

        if (CheckIsValidDirection(map, g_r, g_c, Left) && prevDir != Right)
        {
            double dist = CalculateDistance(g_r, g_c - 1, t_r, t_c);
            if (dist < minDist)
            {
                nextDir = Left;
                minDist = dist;
            }
        }

        if (CheckIsValidDirection(map, g_r, g_c, Down) && prevDir != Up)
        {
            double dist = CalculateDistance(g_r + 1, g_c, t_r, t_c);
            if (dist < minDist)
            {
                nextDir = Down;
                minDist = dist;
            }
        }

        if (CheckIsValidDirection(map, g_r, g_c, Right) && prevDir != Left)
        {
            double dist = CalculateDistance(g_r, g_c + 1, t_r, t_c);
            if (dist < minDist)
            {
                nextDir = Right;
                minDist = dist;
            }
        }

        // move Pac-Man and print direciton
        switch (nextDir)
        {
        case Up:
            g_r -= 1;
            printf("U");
            break;
        case Down:
            g_r += 1;
            printf("D");
            break;
        case Left:
            g_c -= 1;
            printf("L");
            break;
        case Right:
            g_c += 1;
            printf("R");
            break;
        }

        // update previous dorection
        prevDir = nextDir;
    }

    // reach target, the function ends
    printf("\n");
}
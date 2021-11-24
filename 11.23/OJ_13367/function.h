#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>
#include <string.h>

#define VECTOR_2_INITIALIZER {0, 0};

typedef struct Vector2
{
    double x;
    double y;
} Vector2;

void SetValue(Vector2 *v1, double _x, double _y);
Vector2 Add(Vector2 v1, Vector2 v2);
Vector2 Sub(Vector2 v1, Vector2 v2);
Vector2 Mul(Vector2 v1, double d);
Vector2 Div(Vector2 v1, double d);

#endif
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>
#include <stdlib.h>

#define MATRIX_INITIALIZER \
    {                      \
        0, 0, NULL         \
    }

typedef struct Matrix
{
    int rowLength;
    int colLength;
    int *values;
} Matrix;

void Init(Matrix *m, int _rowLength, int _colLength);
void Print(Matrix m);
void Add(Matrix m1, Matrix m2);
void Sub(Matrix m1, Matrix m2);
void Mul(Matrix m1, Matrix m2);

#endif
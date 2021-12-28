#include <stdio.h>
#include "function.h"

void SetValues(Matrix *m);

int main()
{
    char op;
    int rowLength, colLength;

    // read operator
    scanf("%c", &op);

    // matrix 1
    scanf("%d %d", &rowLength, &colLength);
    Matrix m1 = MATRIX_INITIALIZER;
    Init(&m1, rowLength, colLength);
    SetValues(&m1);

    // matrix 2
    scanf("%d %d", &rowLength, &colLength);
    Matrix m2 = MATRIX_INITIALIZER;
    Init(&m2, rowLength, colLength);
    SetValues(&m2);

    if (op == '+')
    {
        Add(m1, m2);
    }
    else if (op == '-')
    {
        Sub(m1, m2);
    }
    else if (op == '*')
    {
        Mul(m1, m2);
    }
    return 0;
}

void SetValues(Matrix *m)
{
    for (int i = 0; i < m->rowLength; i++)
        for (int j = 0; j < m->colLength; j++)
            scanf("%d", &m->values[i * (*m).colLength + j]);
}
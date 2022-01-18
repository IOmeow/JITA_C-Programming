#include "function.h"

void Init(Matrix *self, int _rowLength, int _colLength)
{
    self->rowLength = _rowLength;
    self->colLength = _colLength;
    self->values = (int *)malloc(sizeof(int) * _rowLength * _colLength);
}

void Add(Matrix m1, Matrix m2)
{
    printf("Matrix 1 + Matrix 2:\n");
    if (m1.rowLength == m2.rowLength && m1.colLength == m2.colLength) {
        Matrix m = MATRIX_INITIALIZER;
        Init(&m, m1.rowLength, m1.colLength);
        for (int i = 0; i < m.rowLength; i++)
        for (int j = 0; j < m.colLength; j++)
        m.values[i * m.colLength + j] = m1.values[i * m1.colLength + j] +m2.values[i * m2.colLength + j];
        Print(m);
        }
        else printf("Uncalculable\n");
}

void Sub(Matrix m1, Matrix m2)
{
    printf("Matrix 1 - Matrix 2:\n");
    if (m1.rowLength == m2.rowLength && m1.colLength == m2.colLength) {
        Matrix m = MATRIX_INITIALIZER;
        Init(&m, m1.rowLength, m1.colLength);
        for (int i = 0; i < m.rowLength; i++)
        for (int j = 0; j < m.colLength; j++)
        m.values[i * m.colLength + j] = m1.values[i * m1.colLength + j] - m2.values[i * m2.colLength + j];
        Print(m);
    }
    else printf("Uncalculable\n");
}

void Mul(Matrix m1, Matrix m2)
{
    printf("Matrix 1 * Matrix 2:\n");
    if (m1.colLength == m2.rowLength) {
        Matrix m = MATRIX_INITIALIZER;
        Init(&m, m1.rowLength, m2.colLength);
        for (int i = 0; i < m.rowLength; i++) {
            for (int j = 0; j < m.colLength; j++) {
                int value = 0;
                for (int k = 0; k < m1.colLength; k++) {
                    value += m1.values[i * m1.colLength + k] * m2.values[k *m2.colLength + j];
                }
                m.values[i * m.colLength + j] = value;
            }
        }
        Print(m);
    }
    else printf("Uncalculable\n");
}

 

void Print(Matrix m)
{
    if (m.rowLength != 0 && m.colLength != 0)
    {
        printf("[ ");
        for (int i = 0; i < m.rowLength; i++)
        {
            if (i != 0)
                printf("  ");

            for (int j = 0; j < m.colLength; j++)
            {
                printf("%d", m.values[i * m.colLength + j]);
                if (j == m.colLength - 1)
                {
                    if (i != m.rowLength - 1)
                        printf("\n");
                }
                else
                    printf(" ");
            }
        }
        printf(" ]\n");
    }
}
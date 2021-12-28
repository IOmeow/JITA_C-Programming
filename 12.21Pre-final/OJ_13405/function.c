#include "function.h"

void Init(Matrix *self, int _rowLength, int _colLength)
{
    self->rowLength = _rowLength;
    self->colLength = _colLength;
    self->values = (int*) malloc(_rowLength*_colLength * sizeof(int));
}

void Add(Matrix m1, Matrix m2)
{
    if(m1.colLength==m2.colLength&&m1.rowLength==m2.rowLength){
        for(int i=0; i<m1.colLength*m1.rowLength; i++){
            m1.values[i]+=m2.values[i];
        }
        Print(m1);
    }
    else printf("Uncalculable\n");
}

void Sub(Matrix m1, Matrix m2)
{
    if(m1.colLength==m2.colLength&&m1.rowLength==m2.rowLength){
        for(int i=0; i<m1.colLength*m1.rowLength; i++){
            m1.values[i]-=m2.values[i];
        }
        Print(m1);
    }
    else printf("Uncalculable\n");
}

void Mul(Matrix m1, Matrix m2)
{   
    Matrix ans;
    ans.rowLength=m1.rowLength;
    ans.colLength=m1.rowLength;
    ans.values=(int*) malloc(ans.rowLength*ans.colLength * sizeof(int));
    if(m1.colLength==m2.rowLength&&m1.rowLength==m2.colLength){
        for (int i = 0; i < ans.rowLength; i++){
            for(int j=0; j < ans.colLength; j++){
                int a=0;
                for(int k=0; k < m1.colLength; k++){
                    a+=m1.values[i * (m1).colLength + k]*m2.values[k * (m2).colLength + j];
                }
                ans.values[i * (ans).colLength + j]=a;
            }
        }
        Print(ans);
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
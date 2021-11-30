#include "function.h"

void DynamicallySetArraySize(int **ary, int size)
{
    // TODO
    *ary = (int*) malloc(size * sizeof(int));
}

void PrintArray(int *ary, int size)
{
    // TODO
    for(int i=0;i<size-1;i++){
        printf("%d ",*(ary+i));
    }
    printf("%d\n",*(ary+size-1));
}
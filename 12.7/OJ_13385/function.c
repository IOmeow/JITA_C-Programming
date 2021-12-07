#include "function.h"

void StringSwapElements(char *first_ptr, char *last_ptr)
{
    while(first_ptr < last_ptr){
        char temp = *first_ptr;
        *first_ptr = *last_ptr;
        *last_ptr = temp;
        first_ptr++;
        last_ptr--;
    }
}
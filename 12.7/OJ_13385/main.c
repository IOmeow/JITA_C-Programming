#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "function.h"

int main()
{
    int length;
    char *m_str;

    scanf("%d", &length);
    m_str = (char *)malloc(sizeof(char) * (length + 1));
    scanf("%s", m_str);

    StringSwapElements(m_str, m_str + length - 1);

    printf("%s\n", m_str);
}
#include <stdio.h>
#include "function.h"

void Print(Vector2 v1);

int main()
{
    char op;
    double x1, y1;
    scanf("%c", &op);
    scanf("%lf", &x1);
    scanf("%lf", &y1);

    Vector2 v1 = VECTOR_2_INITIALIZER;
    SetValue(&v1, x1, y1);

    Vector2 v_answer = VECTOR_2_INITIALIZER;
    if (op == '+')
    {
        Vector2 v2 = VECTOR_2_INITIALIZER;
        double x2, y2;
        scanf("%lf", &x2);
        scanf("%lf", &y2);

        SetValue(&v2, x2, y2);
        v_answer = Add(v1, v2);
    }
    else if (op == '-')
    {
        Vector2 v2 = VECTOR_2_INITIALIZER;
        double x2, y2;
        scanf("%lf", &x2);
        scanf("%lf", &y2);

        SetValue(&v2, x2, y2);
        v_answer = Sub(v1, v2);
    }
    else if (op == '*')
    {
        double d;
        scanf("%lf", &d);

        v_answer = Mul(v1, d);
    }
    else if (op == '/')
    {
        double d;
        scanf("%lf", &d);

        v_answer = Div(v1, d);
    }

    Print(v_answer);
    return 0;
}

void Print(Vector2 v1)
{
    printf("(%f, %f)\n", v1.x, v1.y);
}
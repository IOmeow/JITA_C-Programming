#include "function.h"

void SetValue(Vector2 *v1, double _x, double _y)
{
    // TODO
    v1->x = _x;
    v1->y = _y;
}

Vector2 Add(Vector2 v1, Vector2 v2)
{
    // TODO
    v1.x+=v2.x;
    v1.y+=v2.y;
    return v1;
}

Vector2 Sub(Vector2 v1, Vector2 v2)
{
    // TODO
    v1.x-=v2.x;
    v1.y-=v2.y;
    return v1;
}

Vector2 Mul(Vector2 v1, double d)
{
    // TODO
    v1.x*=d;
    v1.y*=d;
    return v1;
}

Vector2 Div(Vector2 v1, double d)
{
    // TODO
    v1.x/=d;
    v1.y/=d;
    return v1;
}
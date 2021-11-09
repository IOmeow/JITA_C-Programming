#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a||a<1||b<1||c<1)printf("NAT\n");
    else if(a==b&&b==c)printf("Equilateral Triangle\n");
    else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)printf("Right Triangle\n");
    else if(a==b||b==c||c==a)printf("Isosceles Triangle\n");
    else printf("Scalene Triangle\n");
    return 0;
}
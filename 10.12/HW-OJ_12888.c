#include <stdio.h>

int main() {
	int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(!(a+b>=c)||!(b+c>=a)||!(c+a>=b)||a<=0||b<=0||c<=0) printf("NAT\n");
    else if(a==b&&b==c) printf("Equilateral Triangle\n");
    else if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b) printf("Right Triangle\n");
    else if(a==b||b==c||c==a) printf("Isosceles Triangle\n");
    else printf("Scalene Triangle\n");
		
	return 0;
}
#include <stdio.h>

int main(){
    int a=123,b,c;
    float f = 1.234;
    char k = 'k';

    scanf("%d %d",&b,&c);

    printf("%d\n",a);
    printf("%d %d\n",b,c);
    printf("%3.2f\n",f);
    printf("%c\n",k);
    return 0;
}

//gcc 10.5_var.c -o main.exe;./main.exe
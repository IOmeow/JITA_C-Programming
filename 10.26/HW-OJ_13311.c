#include <stdio.h>

int main(){
    int I,a1=0,a2=1,temp=0;
    scanf("%d",&I);
    if(I==0){
        printf("0\n");
        return 0;
    }
    while(I>0){
        temp=a2;
        a2=a1+a2;
        a1=temp;
        I--;
    }
    printf("%d\n",a1);
    return 0;
}
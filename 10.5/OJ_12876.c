#include <stdio.h>

int main(){
    int H,M,T;
    scanf("%d %d %d",&H,&M,&T);
    M+=T;
    if(M>59){
        H+=M/60;
        M%=60;
    }
    if(H>23) H%=24;
    printf("%d:%d\n",H,M);      //原版
    printf("%02d:%02d\n",H,M);  //PLUS→補零
    return 0;
}
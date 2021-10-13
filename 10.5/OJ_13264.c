#include <stdio.h>

int main(){
    float Area,Base;
    scanf("%f %f",&Area,&Base);
    float Height=Area*2.0/Base;
    printf("%.1f\n",Height);    //四捨五入到小數點後一位
    printf("%.f\n",Height);     //四捨五入到整數
    return 0;
}
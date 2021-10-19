#include <stdio.h>

int main() {
    int num,ans[15]={},i;
    scanf("%d",&num);
    if(num==0)printf("0");
    for(i=0;num>0;i++){
        ans[i]=num%2;
        num/=2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",ans[i]);
    }
    printf("\n");
    
    return 0;
}
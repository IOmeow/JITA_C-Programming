#include <stdio.h>
#include <time.h>

int main() {
    int num,ans[32767]={},index=0,i=0;
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(i!=2&&i%2==0) continue;
        int count=0,j=1;
        while(j<=i){
            if(i%j==0)count++;
            j++;
        }
        if(count==2){
            ans[index]=i;
            index++;
        }
    }
    for(int i=0;ans[i]!=0;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    printf("%g",(double)clock()/CLOCKS_PER_SEC);

    return 0;
}
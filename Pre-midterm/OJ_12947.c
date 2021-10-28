#include <stdio.h>
#include <string.h>

int main(){
    char K[16],PT[2001],CT[2001]="";
    scanf("%s %s",K,PT);
    for(int i=0;i<strlen(PT);i++){
        int a=K[i%strlen(K)]-'A';
        if(PT[i]+a<='Z') CT[i]=PT[i]+a;
        else CT[i]=PT[i]+a-'Z'+'A'-1;
    }
    printf("%s\n",CT);
    return 0;
}
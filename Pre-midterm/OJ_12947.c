#include <stdio.h>
#include <string.h>

int main(){
    char K[16],PT[2001],CT[2001]="";
    scanf("%s %s",K,PT);
    for(int i=0;i<strlen(PT);i++){
        int a=K[i%strlen(K)]-'A';
        CT[i]=(PT[i]-'A'+a)%26+'A';
    }
    printf("%s\n",CT);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char k[21],ct[2001];
    scanf("%s %s",k,ct);
    for(int i=0;i<strlen(ct);i++){
        int a=k[i%strlen(k)]-'A',pt=ct[i]-'A'-a;
        if(pt<0)pt+=26;
        printf("%c",'A'+pt);
    }
    printf("\n");
    return 0;
}
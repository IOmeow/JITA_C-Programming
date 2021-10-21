#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int ans=0;
    char Bin[16];
    scanf("%s",Bin);
    for(int i=strlen(Bin);i>=0;i--){
        if(Bin[i]=='1'){
            ans+=pow(2,strlen(Bin)-i-1);
        }
    }
    printf("%d\n",ans);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char Str[11];
    scanf("%s",Str);
    int len=strlen(Str);
    
    for(int i=0;i<len/2;i++){
        if(!(Str[i]==Str[len-1-i]||Str[i]==Str[len-1-i]+32||Str[i]==Str[len-1-i]-32)){
            printf("%s is not a palindrome word\n",Str);
            return 0;
        }
    }
    printf("%s is a palindrome word\n",Str);
    return 0;
}
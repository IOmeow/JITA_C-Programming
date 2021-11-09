#include <stdio.h>
#include <math.h>

int main(){
    int num,pr=1,pa=1;
    scanf("%d",&num);
    int n=num,count=0;
    while(n>0){
        n/=10;
        count++;
    }
    for(int i=0;i<count-1;i++){
        int a=pow(10,i),b=pow(10,count-i-1);
        if(num/a%10!=num/b%10)pa=0;
    }
    for(int i=sqrt(num)+1;i>2;i--){
        if(num%i==0)pr=0;
    }
    if(num==4)pr=0;
    if(pr){
        if(pa)printf("Palindromic Prime Number\n");
        else printf("Prime Number\n");
    }
    else{
        if(pa)printf("Palindromic Composite Number\n");
        else printf("Composite Number\n");
    }
    return 0;
}
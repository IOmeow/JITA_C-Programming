#include <stdio.h>
#include <math.h>

int main(){
    int num,count=0,pa=1,pr=1;
    scanf("%d",&num);
    int n=num;
    while(n>0){
        n/=10;
        count++;
    }
    for(int i=0;i<count/2;i++){
        int a=pow(10,i),b=pow(10,count-i-1);
        if(num/a%10!=num/b%10)pa=0;
    }
    for(int i=(int)sqrt(num)+1;i>1;i--){
        if(num%i==0)pr=0;
    }
    if(pa){
        if(pr)printf("%d is a palindromic prime number\n",num);
        else printf("%d is a palindromic number\n",num);
    }
    else{
        if(pr)printf("%d is a prime number\n",num);
        else printf("%d is neither a palindromic number nor a prime number\n",num);
    }
    return 0;
}
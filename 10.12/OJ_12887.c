#include <stdio.h>

int main() {
	int Y;
	int ans=0;
	scanf("%d",&Y);
    if(Y%4!=0)ans=0;
    if(Y%4==0&&Y%100!=0)ans=1;
    if(Y%100==0&&Y%400!=0)ans=0;
    if(Y%400==0)ans=1;
    if(ans==0)printf("Common year\n");
    else printf("Leap year\n");
		
	return 0;
}
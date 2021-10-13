#include <stdio.h>

int main() {
	char op;
	float num1,num2, ans;
	scanf("%c %f %f",&op,&num1,&num2);
	if(op=='/'&&num2==0){
		printf("NaN\n");
		return 0;
	}
	else if(op=='+') {
		ans=num1+num2;
		if(num2<0){
			op='-';
			num2=-num2;
		}
	}
	else if(op=='-') {
		ans=num1-num2;
		if(num2<0){
			op='+';
			num2=-num2;
		}
	}
	else if(op=='*') ans=num1*num2;
	else if(op=='/') ans=num1/num2;
	printf("%.0f %c %.0f = %.0f\n",num1,op,num2,ans);
	
	return 0;
}
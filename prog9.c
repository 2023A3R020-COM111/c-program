#include<stdio.h>
int main(){
	float b,d,w,c,f,x;
	printf("enter the opening balance");
	scanf("%f",&b);
	printf("enter the deposit amount");
	scanf("%f",&d);
	printf("enter the withdrawl");
	scanf("%f",&w);
	c=b+d-w;
	x=d*4/100;
	f=c+x;
	printf("\n closing balance is %f",c);
	printf("\n interest amount is %f",x);
	printf("\n final balance is %f",f);
	return 0;	
}
#include<stdio.h>
int main(){
	float m,e,s,x,y;
	printf("enter the marks in maths\n");
	scanf("%f",&m);
	printf("enter the marks in english\n");
	scanf("%f",&e);
	printf("enter the marks in science\n");
	scanf("%f",&s);
	x=m+e+s;
	y=x/3;
	printf("\n the total marks is %f",x);
	printf("\n the total marks is %f",y);
	return 0;
	
	
}
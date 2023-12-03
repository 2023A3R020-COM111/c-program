#include<stdio.h>
int main(){
	float s,b,d,g,nb;
	printf("enter the number of soaps purchase\n");
	scanf("%f",&s);
	b=s*20;
	d=b*10/100;
	g=b*5/100;
	nb=b-d+g;
	printf("\n bill amount is %f",b);
	printf("\n discount is %f",d);
	printf("\n gst is %f",g);
	printf("\n nnet bill is %f",nb);
	return 0;
}
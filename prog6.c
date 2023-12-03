#include<stdio.h>
int main(){
	float radius,pi=3.14,height,y;
	printf("enter the radius and height\n");
	scanf("%f%f",&radius,&height);
	y=pi*radius*radius*height;
	printf("the volume of cylinder is %f\n",y);
	return 0;
	
}
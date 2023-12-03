#include<stdio.h>
int main(){
	float radius,pi=3.14,area;
	printf("enter the radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of circle is %f\n",area);
	return 0;
}
#include<stdio.h>
int main(){
	int opt;
	float pi=3.14,area,vol,radius,length,width,side,base,altitude,heigth;
	printf("\n geometrical menu");
	printf("\n 1.area of circle");
	printf("\n 2. area of rectangle");
	printf("\n 3. area of square");
	printf("\n 4.area of trinangle");
	printf("\n 5. volume of cylinder");
	printf("\n 6. quit");
	printf("\n enter any option");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
		printf("enter radius of circle\n");
		scanf("%f",&radius);
		area=pi*radius*radius;
		printf("the area of circle is %d",area);
		break;
		case 2:
		printf("enter length and width of rectangle\n");
		scanf("%f%f",&length,&width);
		area=length*width;
		printf("the area of rectangle is %f",area);
		break;
		case 3:
		printf("enter side of square\n");
		scanf("%f",&side);
		area=side*side;
		printf("the area of square is %f",area);
		break;
		case 4:
		printf("enter base and altitude\n");
		scanf("%f%f",&base,&altitude);
		area=base*altitude/2;
		printf("the area of triangle is %f",area);
		break;
		case 5:
		printf("enter radius and heigth of cylinder\n");
		scanf("%f%f",&radius,&heigth);
		vol=pi*radius*radius*heigth;
		printf("the vol of cylinder is %f",vol);
		break;
		case 6:
		printf("exist(0)");
		break;
		default:
		printf("invalid option entered\n");
		break;
		
	}
	return 0;
}
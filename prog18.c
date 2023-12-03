#include<stdio.h>
int main(){
	int m,e,s,z,y;
	printf("enter the marks of maths\n");
	scanf("%d",&m);
	printf("enter the marks of english\n");
	scanf("%d",&e);
	printf("enter the marks of science\n");
	scanf("%d",&s);
	z=m+s+e;
	y=z/3;
	if(y>=75){
	printf("disiction\n");}
	else if(y>=60&&y<=74){
	printf("ist division\n");}
	else if(y>=47&&y<=59){
	printf("2nd division\n");}
	else if(y>=33&&y<=46){
	printf("3rd division\n");}
	else{
	printf("fail\n");}
	printf("\n the total marks is %d",z);
	printf("\n the average marks is %d",y);
	return 0;
}
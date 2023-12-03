#include<stdio.h>
int main(){
	int f,s,d,m,number;
	printf("enter the two numbers\n");
	scanf("%d%d",&f,&s);
	d=f/s;
	m=f%s;
	printf("\n division of two numbers is %d",d);
	printf("\n modulas of two numbers is %d",m);
	return 0;
	
}
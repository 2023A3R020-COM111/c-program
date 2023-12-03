#include<stdio.h>
int main(){
	int f,s,number;
	printf("enter the first number\n");
	scanf("%d",&f);
	printf("enter the second number\n");
	scanf("%d",&s);
	f=f+s;
	s=f-s;
	f=f-s;
	printf("\n the value of f is %d",f);
	printf("\n the value of s is %d",s);
	return 0;
}
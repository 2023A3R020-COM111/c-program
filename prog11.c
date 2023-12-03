#include<stdio.h>
int main(){
	int f,s,t,number;
	printf("enter the first number\n");
	scanf("%d",&f);
	printf("enter the second number\n");
	scanf("%d",&s);
	t=f;
	f=s;
	s=t;
	printf("\n the value of f is %d",f);
	printf("\n the value of s is %d",s);
	return 0;
	
}
#include<stdio.h>
int main(){
	int i,f,s,p=0;
	printf("enter first number\n");
	scanf("%d",&f);
	printf("enter the second number\n");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
	p=p+f;
	}
	printf(" the multiply  of two number is %d",p);
	return 0;
	
}
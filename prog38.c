#include<stdio.h>
int main(){
	int i,a,b,n,c;
	printf("enter a number\t");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d%d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c; 
		printf("%d",c);
	}
	return 0;
	
}
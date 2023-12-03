#include<stdio.h>
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if(n>=1&&n<=10)
    {
	printf("\n good");
	}
	else if(n>=11&&n<=25)
	{
	printf("\n better");
	}
	else if(n>=26&&n<=99)
	{
	printf("\n best");
	}
	else
	{
		printf("\n bad");
	}
	return 0;
}
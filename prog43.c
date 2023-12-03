#include<stdio.h>
int main(){
	int f=1,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	while(n>=1)
	{
	   f=f*n;
	   n--;
	}
	printf("the factorial is %d",f);
	
	return 0;
}

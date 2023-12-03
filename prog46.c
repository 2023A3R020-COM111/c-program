#include<stdio.h>
int main(){
	int n,d,r=0,t;
	printf("enter a number\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
		
	}
	if(r==t)
	{
		printf("number is palindrome\n");
	}
	else{
		printf("number is not palindrom\n");
	}
	printf("the reverse is %d",r);
	
	return 0;
}

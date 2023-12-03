#include<stdio.h>
int main(){
	int n,d,r=0,s=0,c=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		s=s+d;
		c=c+1;
		n=n/10;
	}
	printf("\n reverse is %d",r);
	printf("the sum is %d",s);
	printf("count is %d",c);
	return 0;

}
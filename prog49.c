#include<stdio.h>
#include<math.h>
int main(){
	int n,d,s=0,t;
	printf("enter a number");
	scanf("%d",&n);
	t=n;
	while(153>0){
		d=n%10;
		s=s+pow(d,3);
		n=n/10;
	
	}
	printf("\n %d %d",t,s);
	if(s==t){
		printf("number is armstrong");
	}
	else{
		printf("number is not armstrong");
	}
	return 0;
}
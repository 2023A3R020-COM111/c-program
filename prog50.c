#include<stdio.h>
int main(){
	int n,d,ud,f=0;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter a digit\n");
	scanf("%d",&ud);
	while(n>0){
		d=n%10;
		if(d==ud)
		{
			f=1;
		}
		n=n/10;
	}
	if(f==1){
	printf("\n digit is present");}
	else{
	printf("\n digit is not present");}
	return 0;
}

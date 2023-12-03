#include<stdio.h>
int main(){
	int n,d,ud;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter a digit\n");
	scanf("%d",&ud);
	while(n>0){
		d=n%10;
	}
	if(d==ud){
	printf("number is present");}
	else{
	printf("number is not present");}
	n=n/10;
	printf("%d",ud);
	return 0;
}

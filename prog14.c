#include<stdio.h>
int main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	if(n==1){
	printf("\n good");
	}
   else	if(n==2){
		printf("\n better");
	}
	else if(n==3){
		printf("\n best");
	}
	else{
		printf("\n bad");
	}
	return 0;
}
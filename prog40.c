#include<stdio.h>
int main(){
	int i,n;
	printf("enter a number\t");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("\n number is not prime");
		}
		else{
			printf("\nnumber is prime");
		}
	}
	return 0;
}
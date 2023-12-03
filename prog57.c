#include<stdio.h>
int main(){
	float b=10000,wd,cb;
	bank:
	printf("enter the withdrawl amount\t");
	scanf("%f",&wd);
	if(wd>=1&&wd<=9500)
	{
		cb=b-wd;
		printf("\n balance aftere withdrawal %f",cb);
	}
	else{
		printf("\n insufficient balance you have only Rs %f",b);
		goto bank;
		
	}
	return 0;
}

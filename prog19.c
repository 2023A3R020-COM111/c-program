#include<stdio.h>
int main(){
	int eu,eb;
	printf("enter the number of electricity units consumed\n");
	scanf("%d",&eu);
	if(eu>=1&&eu<=199)
	{
	eb=eu*2.75;
	}
	else if(eu>=200&&eu<=499)
	{
	eb=eu*4.25;
	}
	else if(eu>=500)
	{
	eb=eu*5.25;	
	}
	printf("\n the ebill is %d",eb);
	return 0;
}
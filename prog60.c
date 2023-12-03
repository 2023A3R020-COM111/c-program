#include<stdio.h>
int main(){
	float m[100],y;
	int i,s;
	printf("\nenter number of employes\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter montly salary of employes %d\t",i);
		scanf("%f",&m[i]);
		
	}
	for(i=0;i<s;i++)
	{
		y=12*m[i];
		printf("\nmonthly salary of employes %d are %f",i,y);
	}


	return 0;
}
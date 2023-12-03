#include<stdio.h>
int main(){
	int arr[100];
	int i,s,se=0,so=0,co=0,ce=0;
	printf("\nenter a size\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter value at %d\t",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<s;i++)
	{
		if(arr[i]%2==0)
		{
			se=se+arr[i]; 
			ce=ce+1;
		}
	
		else{
			so=so+arr[i];
			co=co+1;
		}
		
	}
	printf("\nsum of evens %d",se);
	printf("\ncount of evens %d",ce);
	printf("\nsum of odds %d",so);
	printf("\ncount of odds %d",co);
	return 0;
}
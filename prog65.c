#include<stdio.h>
int main(){
	int arr[100];
	int i,s,v,id=-1;
	printf("\nenter size\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter value at %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("enter value to be searched\t");
	scanf("%d",&v);
	for(i=0;i<s;i++)
	{
		if(arr[i]==v)
		{
			id=i;
		}
		if(id==-1)
		{
			printf("\nvalue not found");
		}
		else{
			
	printf("\nvalue %d is present at index no %d",v,id);
		}
	return 0;
}
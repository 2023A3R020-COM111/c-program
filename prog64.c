#include<stdio.h>
int main(){
	int arr[100];
	int i,s,t,e;
	printf("\nenter a size\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter value at %d\t",i);
		scanf("%d",&arr[i]);
	}
	for(i=0,e=s-1;i<s/2;i++,e--)
	{
		t=arr[i];
		arr[i]=arr[e];
		arr[e]=t;
	}
	for(i=0;i<s;i++)
	{
		printf("\n %d",arr[i]);
	}
}
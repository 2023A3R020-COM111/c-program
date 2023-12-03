#include<stdio.h>
int main(){
	int arr[100];
	int i,s,v,id=-1,b,e,m;
	printf("\nenter size\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter value at %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("enter value to be searched\t");
	scanf("%d",&v);
	b=0;
	e=s-1;
	while(b<=e&&id==-1)
	{
		m=(b+e)/2;
		if(arr[m]==v)
		{
			id=m;
		}
		else if(arr[m]<v)
		{
			b=m+1;
		}
		else
		{
			e=m-1;
		}
	}
	if(id==-1)
	{
		printf("\nvalue not found");
	}
	else
	{
		printf("\nvalue %d is present at index number %d",v,id);
	}
	return 0;
}

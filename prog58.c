#include<stdio.h>
int main(){
	float m[100];
	int i ,s;
	printf("\nenter number of students\t");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nenter marks of students number %d\t",i);
		scanf("%f",&m[i]);
	}
	for(i=0;i<s;i++)
	{
		printf("\n marks of students number %d are %f",i,m[i]);
	}
	return 0;
}
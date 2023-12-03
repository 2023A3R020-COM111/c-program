 #include<stdio.h>
 int main(){
 	int arr[100];
 	int i,s,l=0;
 	printf("\nenter the size\t");
 	scanf("%d",&s);
 	for(i=0;i<s;i++)
 	{
	 	printf("\nenter value at %d\t",i);
	 	scanf("%d",&arr[i]);
	 }
	 for(i=0;i<s;i++)
	 {
 		if(arr[i]>l)
 		{
		 	l=arr[i];
		 }
 	}
 	printf("\n largest number is %d",l);
 	return 0;
 }
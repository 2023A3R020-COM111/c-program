#include<stdio.h>
int main(){
	int opt,f,s,r;
	printf("\n  calculator");
	printf("\n 1. addition");
	printf("\n 2. subration");
	printf("\n 3. multiply");
	printf("\n 4. division");
	printf("\n 5.quit");
	printf("enter an option \t");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
		printf("enter two numbers\n");
		scanf("%d%d",&f,&s);
		r=f+s;
		printf("the sum is %d",r);
		break;
		case 2:
		printf("enter two numbers\n");
		scanf("%d%d",&f,&s);
		r=f-s;
		printf("the subration is %d",r);
		break;
		case 3:
		printf("enter two numbers\n");
		scanf("%d%d",&f,&s);
		r=f*s;
		printf("the multiplication is %d",r);
		break;
		case 4:
		printf("enter two numbers\n");
		scanf("%d%d",&f,&s);
		r=f/s;
		printf("the division is %d",r);
		break;
		case 5: 
	   printf("exist(0)");
		break;
		default:
		printf("\ninvalid option entered");
		
	}
	return 0;
}
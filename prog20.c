#include<stdio.h>
int main(){
int n;
printf("enter the number\t");
scanf("%d",&n);
switch(n)
{
	case 1:
	printf("\n good");
	break;
	case 2:
	printf("\n better");
	break;
	case 3:
	printf("\n best");
	break;
	default:
	printf("\n invaild");
}
return 0;
}
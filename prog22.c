#include<stdio.h>
int main(){
	char n;
	printf("enter a character\n");
	scanf("%c",&n);
	switch(n)   
	{
 	case 'a':
	printf("apple\n");
	break;
	case 'b':
	printf("ball\n");
	break;
	case 'c':
	printf("cat\n");
	break;
	default:
	printf("\n invaild");
}
return 0;
}
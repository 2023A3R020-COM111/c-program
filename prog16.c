#include<stdio.h>
int main(){
	int f,s,t;
	printf("enter first number\n");
	scanf("%d",&f);
	printf("enter the second number\n");
	scanf("%d",&s);
	printf("enter third number\n");
	scanf("%d",&t);
	if(f>s&&f>t)
	{
	printf("\n the greater number is %d",f);
	}
	else if(s>f&&s>t)
    {
    	printf("\n the greater number is %d",s);
	    
    }
    else if(t>f&&t>s)
		{
    
    	printf("the greater number is %d",t);
    	
    }else{
    	printf("\n the smaller is %d");
    }
    return 0;
    
	
}
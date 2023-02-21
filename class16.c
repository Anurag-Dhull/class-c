#include<stdio.h>
int main()
{
	int v;
	printf("enter no.");
	
	scanf("%d",&v);
	if(v<10){
		printf("no is less than 10");
	}
	else if(v<100)
	{
		printf("no is less than 100");
	}
	else{
		printf("invalid");
	}
}

#include<stdio.h>
int main()
{
	int i,j;
	printf("enter i:-");
	scanf("%d",&i);
	printf("enter j:-");
	scanf("%d",&j);
	do{
		printf("%d=%d* %d",i,j,(i*j));
		i++;
	}
	while(i<=10);
}

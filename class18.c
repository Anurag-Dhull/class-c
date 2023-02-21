# include<stdio.h>
int main()
{
	float marks;
	scanf("%f",&marks);
	printf("enter ur marks:-");
	if(marks>90){
		printf("a grade");
	}
	else if(marks>80){
		printf("b grade");
	}
	else if(marks>70){
		printf("c grade");
	}
	else if(marks>60){
		printf("d grade");
	}
	else{
		printf("paisa barbad");
	}
	return 0;
	
	
		
	
}

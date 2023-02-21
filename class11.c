# include<stdio.h>
# include<conio.h>
int main()
{
    int marks , attendance;
    printf("enter your marks :-");
    scanf("%d",&marks);
    printf("enter your attendance :-");
    scanf("%d",&attendance);
    if(marks>60 && attendance>=75)
    {
    printf("good");
    }
    else
    {
        printf("bad");
        }
}
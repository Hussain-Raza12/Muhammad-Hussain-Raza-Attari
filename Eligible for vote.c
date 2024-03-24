#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter your Age:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Congratulations! You are Eligible for Vote");
    }
    else
    {
        printf("Sorry! You are not Eligible for Vote");
    }
    getch();
}

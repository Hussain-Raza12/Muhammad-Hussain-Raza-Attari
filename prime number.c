#include<stdio.h>
#include<conio.h>
int main()
{
    int n,flag=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("This is a prime number");
    }
    else{
        printf("This is not a prime number");
    }
    getch();
    return 0;
}

#include<stdio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=6;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

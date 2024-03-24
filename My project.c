#include<stdio.h>
#include<conio.h>
int main()
{
    int price,quantity,result;
    printf("Enter price:");
    scanf("%d",&price);
    printf("Enter quantity:");
    scanf("%d",&quantity);
    result=price*quantity;
    printf("The whole price is:%d",result);
    getch();
    return 0;
}

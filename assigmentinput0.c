#include<stdio.h>
int main()
{
    int number , sum=0;
    printf("enter a no");
    scanf("%d",&number);
    while(number!=0)
    {
        sum*=number;
        printf("enter a no.");
        scanf("%d",&number);

    }
    printf("\n the sum is %d",sum);
    getch();
}

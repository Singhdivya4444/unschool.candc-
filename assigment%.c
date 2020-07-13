#include<stdio.h>
int main()
{
    int num,Grade;
    printf("enter your num");
    scanf("%d", &num);

    if(num>=80)
         Grade="A";
    else if(num>70 && num>=80)
         Grade="B";
    else if(num>60 && num<=70)
        Grade="C";
    else if(num>45 && num<=60)
        Grade="D";
    else if(num<45)
        Grade="fail";
        printf("%s\n",Grade);
    getch();
}

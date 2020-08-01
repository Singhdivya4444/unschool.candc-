#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    for (int i=0;i<5;i++)
    printf("%d",srand());
    return 0;
}




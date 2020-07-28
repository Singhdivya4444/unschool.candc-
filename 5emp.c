#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[5];
    float salary;
    int experience;
};
int main()
{
    struct emp e[5]; //array of structure
    int i,n;
    for(i=0;i<5;i++)
    {
        printf("\nenter %d emp id, name, salary and experience",i+1);
        fflush(stdin);
        scanf("%d",&e[i].id);
        fflush(stdin);
        gets(e[i].name);
        fflush(stdin);
        scanf("%f",e[i].salary);
        fflush(stdin);
        scanf("%d",&e[i].experience);
    }
    printf("\nenter id whose details you want to print\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(e[i].id==n)
        {
            printf("\nemp id = %d",e[i].id);
            printf("\nemp name =%s",e[i].name);
            printf("\nemp salary =%f",e[i].salary);
            printf("\nemp experience =%d",e[i].experience);
            break;
        }
    }
    return 0;
}


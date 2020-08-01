#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
float area(float ,float );
int main()
{
    int r;
    cout<<"enter radius of a circle";
    cin>>r;
    cout<<"area of circle is "<<area(r);
    getch();
    int l,b;
    cout<<endl<<"enter length and breadth of a rectangle";
    cin>>l>>b;
    cout<<"area of rectangle is "<<area(l,b);
    getch();
    int c,h;
    cout<<endl<<"enter base and height of a triangle";
    cin>>c>>h;
    cout<<"area of triangle is"<<area(c,h);
    getch();
}
int area (int l, int b)
{
    return(l*b);
}
float area(int r)
{
    return(3.14*r*r);
}
float area(float c, float h)
{
    return(0.5*c*h);
}


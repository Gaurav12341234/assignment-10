//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area (int);
int main()
{
    int a;
    float s;
    printf("Enter a radius:");
    scanf("%d",&a);
    s=area(a);
    printf("Area of the circle is %.2f",s);
}
float area(int r)
{
    float b;
    b=3.14*r*r;
    return b;
}
//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float Simple(int,int,float);
int main()
{
    int a,b;
    float c,s;
    printf("Enter three values:");
    scanf("%d%d%f",&a,&b,&c);
    s=Simple(a,b,c);
    printf("simple interest is %.2f",s);
    return 0;
}
float Simple(int p,int t,float r )
{
    float result;
    result=(p*t*r)/100;
    return(result);
}
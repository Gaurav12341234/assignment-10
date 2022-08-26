//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int fun(int,int);
int main()
{
    int num,digit,s;
    printf("Enter two numbers:");
    scanf("%d%d",&num,&digit);
    printf("num=%d and digit=%d\n",num,digit);
    s=fun(num,digit);
    if(s==digit)
        printf("\"YES\" Given number contains a given digit");
    else
        printf("\"NO\" Given number contains not a given digit");
    return 0;
}
int fun(int n,int d)
{
    int rem;
    while(n)
    {
        rem=n%10;
        if(rem==d)
            return rem;
        n=n/10;
    }
    return rem;
}
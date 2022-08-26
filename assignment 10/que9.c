//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int fun(int,int,int);
int main()
{
    int num,dig,count=0,s,a;
    printf("Enter a number and a digit:");
    scanf("%d%d",&num,&dig);
    a=num;
    while(a)
    {
        count++;
        a=a/10;
    }
    s=fun(num,dig,count);
    if(s==count+1)
        printf("\"NO\" Given Number not contain a given digit");
    else
        printf("\"YES\" Given Number contain a given digit");
    return 0;
}
int fun(int number,int digit,int cnt)
{
    int a,b,i;
    a=number;
    for(i=1;i<=cnt;i++)
    {
        b=a%10;
        a=a/10;
        if(b==digit)
            break;
    }
    return i;
}

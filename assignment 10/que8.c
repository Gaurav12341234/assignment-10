//8. Write a function to calculate the number of arrangements one can make from n items 
//   and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int perm(int,int);
int main()
{
    int n,r,result;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&r);
    printf("n=%d and r=%d\n",n,r);
    if (n>=r)
    {
        result=perm(n,r);
        printf("Number of arrangments are %d",result);
    }
    else
        printf("Invalid input");
    return 0;
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}

int fact (int a)
{
    int b=1;
    for(;a>1;a--)
        b=b*a;
    return b;
}
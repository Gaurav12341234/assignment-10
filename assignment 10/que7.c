//7. Write a function to calculate the number of combinations one can make from n items 
//   and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
    int n,r,result;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&r);
    printf("n=%d and r=%d",n,r);
    if(n>=r)
    {
        result=comb(n,r);
        printf("\nNumber of Combinations are %d",result);
    }
    else
        printf("\nInvalid input");
    return 0;
}
int comb(int n,int r)
{
    return (fact(n))/(fact(r)*fact(n-r));
}
int fact(int a)
{
    int b=1;
    for(;a>1;a--)
        b=b*a;
    return b;
}

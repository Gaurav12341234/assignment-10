//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial (int);
int main()
{
    int N,s;
    printf("Enter a number:");
    scanf("%d",&N);
    s=factorial(N);
    printf("Factorial is %d",s);
    return 0;
}
int factorial(int n)
{
    int fact=1;
    for(;n>1;n--)
        fact=fact*n;
    return(fact);
}
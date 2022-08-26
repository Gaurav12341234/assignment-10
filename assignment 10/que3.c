//3. Write a function to check whether a given number is even or odd. Return 1 if the 
//   number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check(int);
int main()
{
    int x,s;
    printf("enter a number:");
    scanf("%d",&x);
    s=check(x);
    if(s==1)
        printf("Even number");
    else    
        printf("Odd number");
    return 0;
}
int check(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
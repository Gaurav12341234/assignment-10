//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void fun(int);
int main()
{
    int N;
    printf("Enter a number:");
    scanf("%d",&N);
    fun(N);
    return 0;
}
void fun (int n)
{
    int i;
    for(i=1;i<=2*n;i=i+2)
        printf("%d ",i);
}
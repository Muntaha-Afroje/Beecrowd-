/*Read a value N. Calculate and write its corresponding factorial.
Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1. */

#include<stdio.h>
int main()
{
    int N,fact=1,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}

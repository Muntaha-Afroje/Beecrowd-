//Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
//mane N diye bhag korle remainder 2 ashbe.

#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=10000;i++)
    {
        if(i%N==2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

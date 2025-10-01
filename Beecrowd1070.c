/*Read an integer value X and print the 6 consecutive odd numbers from X,
 a value per line, including X if it is the case.*/

#include<stdio.h>
int main()
{
    int X,count;
    scanf("%d",&X);
    for(count=0;count<12;count++)
    {
        if(X%2!=0)
        {
            printf("%d\n",X);
        }
        X++;
    }
    return 0;
}

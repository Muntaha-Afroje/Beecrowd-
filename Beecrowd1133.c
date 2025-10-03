/*Write a program that reads two integer numbers X and Y.
Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.*/

#include<stdio.h>
int main()
{
    int X,Y,i,temp;
    scanf("%d %d",&X,&Y);
    if(X>Y)
    {
      temp=X;
      X=Y;
      Y=temp;
    }
    for(i=X;i<Y;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

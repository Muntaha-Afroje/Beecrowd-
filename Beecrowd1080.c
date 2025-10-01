/* Read 100 integer numbers. Print the highest read value and the input position. */

#include <stdio.h>
int main()
{
    int num,i,max,pos;
    scanf("%d",&num);
    max=num;
    pos=1;
    for(i=2;i<=100;i++)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
            pos=i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}

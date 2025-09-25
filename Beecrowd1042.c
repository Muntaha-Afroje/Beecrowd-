#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min,mid,max;
    if(a<b&&a<c)
    {
        min=a;
    }
    else if(b<a&&b<c)
    {
        min=b;
    }
    else{
        min=c;
    }
    if(a>b&&a>c)
    {
        max=a;
    }
    else if(b>a&&b>c)
    {
        max=b;
    }
    else{
        max=c;
    }
    if(a!=min&&a!=max)
    {
        mid=a;
    }
    else if(b!=min&&b!=max)
    {
        mid=b;
    }
    else{
        mid=c;
    }
    printf("%d\n%d\n%d\n",min,mid,max);
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}

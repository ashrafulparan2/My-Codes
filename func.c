#include <stdio.h>
int minimum(int a,int b)
{
    int min;

    if(a<b)
    {
        min=a;
    }
    else{
        min=b;
    }

    return min;
}
int main()
{

    int a,b,c,t1,t2;
    scanf("%d%d%d",&a,&b,&c);
    t1=minimum(a,b);
    t2=minimum(t1,c);
    printf("%d",t2);
}

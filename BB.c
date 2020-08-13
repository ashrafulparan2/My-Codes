#include <stdio.h>

int m(int a,int b)
{
    int x=(a<b)?a:b;
    return x;
}

int main()
{
    int n,c1=0,c2=0,c3=0,x,y,z;
    char c[1000];
    scanf("%d",&n);
    gets(c);
    for(int i=0;i<n;i++)
    {

        if(c[i]=='N')
            c1++;
        else if(c[i]=='S')
            c2++;
        else if(c[i]=='U')
            c3++;
    }
    x=c1/3;
    y=c2/3;
    z=c3/3;
    int p=m(x,y);
    int q=m(p,z);

    printf("%d\n",q);

    return 0;
}

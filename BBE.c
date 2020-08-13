#include<stdio.h>

int m(int a,int b)
{
    int x=(a<b)?a:b;
    return x;
}

int main()
{
    int t,i,c=0,d=0,e=0,f;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        char s[101];
        scanf("%c",&s[i]);
        if(s[i]=='N')
            c++;
        if(s[i]=='S')
            d++;
        if(s[i]=='U')
            e++;

    }
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    /*if(c<d&&c<e)
        printf("%d\n",c);
    else if(d<c&&d<e)
        printf("%d\n",d);
    else
        printf("%d\n",e);
        */
}

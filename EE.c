#include<stdio.h>
main()
{
    int n,x,d,count=0,i,b,c=0,a;
    scanf("%d%d%d",&n,&x,&d);
    while(n--)
    {
        int p;
        scanf("%d",&p);
        for(i=n-1; i>=0; i--)
        {
            a=p-i*d;
            if(a>0)
            {
                b=a;
                c=c+b;
                //count++;
            }
            count++;
            if(c>=x)
                break;
        }
    }
    printf("%d",count);
}

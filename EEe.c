#include<stdio.h>
main()
{
    int n,x,d,i,c=0,a,count=0;
    scanf("%d%d%d",&n,&x,&d);
    while(n--)
    {
        int p;
        scanf("%d",&p);
        for(i=n-1; i>=0; i--)
        {
            a=p-i*d;
            c=c+a;
            if(c<0){
                c=0;
            count++;
            }
            if(c<x)
            {
                count++;
            }
            if(c>=x){
                    count++;
                break;}
        }
    }
    printf("%d",count);
}

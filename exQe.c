#include<stdio.h>
int main()
{
    int i,N,K,count=0,COUNT=0,p,q,l;
    scanf("%d%d",&N,&K);
    for(i=1; i<=N+1; i++)
    {
        char a;
        scanf("%c",&a);
        if(a=='G')
            COUNT=COUNT+1;
        else if(a=='H')
            count=count+1;
    }
    if(count<K||COUNT<K)
    {
        printf("-1\n");
    }

    else if(count+COUNT==N && K>=1 && K<=6)
    {
        p=COUNT/K;
        q=count/K;
        l=p+q;
        printf("%d\n",l);
    }

    return 0;
}

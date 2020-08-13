#include<stdio.h>
int main()
{
    int i,N,K,count=0,COUNT=0,p,q,l;
    scanf("%d%d",&N,&K);
    for(i=0; i<N; i++)
    {
        char a;
        scanf("%c",&a);
        if(a=='G')
            COUNT=COUNT+1;
        else if(a=='H')
            count=count+1;
    }

    p=COUNT/K;
    q=count/K;


    l=p+q;
    printf("%d\n",l);


}

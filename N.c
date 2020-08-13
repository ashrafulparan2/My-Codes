#include <stdio.h>
#include <stdlib.h>


int comparetor1 (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}


int comparetor2 (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int hello()
{
    int a[6],b[6],c,min=0,max=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&c);
        b[i]=c;
        a[i]=c;
    }

    qsort (b,5, sizeof(int), comparetor1 );

    for(int i=0;i<4;i++)
    {
        min+=b[i];
    }

    qsort (a,5, sizeof(int), comparetor2 );

    for(int i=0;i<4;i++)
    {
        max+=a[i];
    }

    printf("%d %d\n",min,max);

    return 0;
}


int main()
{
    hello();

    return 0;
}

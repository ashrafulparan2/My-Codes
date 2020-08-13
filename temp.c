#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
	{
		return ( (int)a - (int)b );
	}

int main()
{
    int k,a,b[101],c[101],ans=0;
    int x=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&a);
        b[i]=a;
    }
    int i;
    qsort (b,k, sizeof(int), comparetor );
    puts(b);

    return 0;
}

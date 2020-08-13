#include <stdio.h>
int main()
{
    int i,j,n;
    int a[15000];
    for(i=2;i<=15000;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            //printf("%d ",i);
            for(int j=0;j<15000;j++)
            {
                a[j] =i;
            }
            printf("%d",a[100]);

        }

    }
    return 0;
}

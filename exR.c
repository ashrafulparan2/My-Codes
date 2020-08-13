#include<stdio.h>
#include<string.h>
int main()
{
    long long t,i,j,count;
    char a[31];
    scanf("%lld",&t);
    for(j=0; j<t; j++)
    {
        count=1;
        scanf("%s",a);
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]==a[i+1])
            {
                count*=2;
            }

        }
        printf("%lld\n",count);
    }
    return 0;
}

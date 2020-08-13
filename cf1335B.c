#include <stdio.h>
int main()
{
    char s[2001];
    int t,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        scanf("%d%d%d",&n,&a,&b);

        while(count<=n)

        {

            for(int i=97; i<97+b-1; i++)
            {
                printf("%c",i);
                count++;
            }
            for(int j=0; j<(a-b+1); j++)
            {
                printf("z");
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}

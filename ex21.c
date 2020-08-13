#include <stdio.h>
int main()
{
    int k,a,b,c,x,y,ans;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
        {
            x=b;
            y=c;
        }
        else if(b>a&&b>c)
        {
            x=a;
            y=c;
        }
        else{
            x=a;
            y=b;
        }
        ans=(x/2)+(y/2)+2;
        printf("%d\n",ans);
    }
}

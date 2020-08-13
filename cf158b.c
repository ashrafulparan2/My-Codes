#include <stdio.h>
int main()
{
    int a;
    double n,s,count,sum=0,cnt=0;
    scanf("%lf",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%lf",&s);
        sum+=s;
        if(s==3)
            cnt++;
    }
    count=(sum/4);
    a=ceil(count);
    if(count)
    {
        int b = count;

        if(count-b==0)
        {
            a = count+cnt-1;
            printf("%d\n",a);
        }
        else
        {
            a = count;
            printf("%d\n",a);
        }


    }

}

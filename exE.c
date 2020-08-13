#include<stdio.h>
int main()
{
    int a,b,h,m;
    scanf("%d:%d",&a,&b);
    while(1)
    {
        b++;
        if(b%60==0)
        {
            a++;
            b=b%60;
        }
        h=a%24;
        m=b;
        if(((h/10)==(m%10))&&((m/10)==(h%10)))
        {
            printf("%02d:%02d",h,m);
            break;
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a,b,c,d,t,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>c)
    {

        c+=24;
        t=c-a;

    }

    else
    {
        if(b>d)
        {
            t=c-a;
            t--;
        }
        else{
            t=c-a;
        }

    }
    if(b>d)
    {
        d+=60;
        m=d-b;
    }

    else
    {
        m=d-b;
    }

    if(a==b && c==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,m);
    }


}

#include <stdio.h>
int main()
{
    int s,v1,v2,t1,t2,x1,x2;
    scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);
    x1=s*v1+2*t1;
    x2=s*v2+2*t2;
    if(x2>x1)
        printf("First\n");
    else if(x1>x2)
        printf("Second\n");
    else
        printf("Friendship\n");
}

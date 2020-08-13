#include <stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a+b>c&&b+c>a&&c+a>b)||(a+c>d&&c+d>a&&d+a>c)||(a+b>d&&b+d>a&&d+a>b)||(b+c>d&&c+d>b&&b+d>c))
        printf("TRIANGLE\n");
    else if(a+b==c||b+c==a||c+a==b||a+c==d||c+d==a||d+a==c||a+b==d||b+d==a||d+a==b||b+c==d||c+d==b||b+d==c)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");
}

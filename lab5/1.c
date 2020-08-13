#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("Valid Triangle\n");
        if(a==b&&b==c)
        {
            printf("Equilateral\n");
        }
        else if(a==b||b==c||c==a)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
    }
    else
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n&1==1)
        printf("%d 9\n",n+9);
    else
        printf("%d 4\n",n+4);
}

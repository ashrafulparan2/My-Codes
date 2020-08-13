#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        printf("%d is equal to Zero\n",num);
    }
    else if(num<0)
    {
        printf("%d is a negative number\n",num);
    }
    else
    {
        printf("%d is a positive number\n",num);
    }
}

#include <stdio.h>

int main()
{
    int n=0, sum=0;

    do{
        printf("Enter a number : ");
        scanf("%d",&n);
        sum+=n;
        printf("sum = %d\n",sum);
    }
    while(sum<=100);

    printf("Done");

    return 0;
}

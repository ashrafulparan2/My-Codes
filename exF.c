#include <stdio.h>
int main()
{
    int n,p;
    double a,sum=0.0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p);
        sum += p;
    }

    printf("%.12lf\n",sum/n);

    return 0;
}

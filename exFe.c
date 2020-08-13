#include <stdio.h>
int main()
{
    int n,i;
    double sum=0.0;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        sum+=p[i];
    }
    sum=sum/n;
    printf("%.12lf\n",sum);
    return 0;
}

#include <stdio.h>
int main()
{
    int n,a[1000],max=0,min;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    min=a[0];max=a[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d\n%d\n",max,min);
}
